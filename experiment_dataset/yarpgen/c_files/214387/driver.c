#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4339949056988227496LL;
unsigned char var_3 = (unsigned char)56;
unsigned short var_5 = (unsigned short)42137;
unsigned long long int var_8 = 12581735462706066357ULL;
unsigned char var_9 = (unsigned char)100;
unsigned char var_11 = (unsigned char)111;
int zero = 0;
unsigned short var_12 = (unsigned short)10799;
short var_13 = (short)-15903;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
