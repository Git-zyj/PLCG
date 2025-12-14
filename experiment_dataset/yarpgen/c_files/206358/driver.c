#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3223299530U;
unsigned short var_2 = (unsigned short)20684;
short var_3 = (short)2886;
unsigned short var_4 = (unsigned short)986;
int var_5 = -1633940266;
int zero = 0;
unsigned int var_12 = 848972544U;
unsigned char var_13 = (unsigned char)184;
short var_14 = (short)-9714;
signed char var_15 = (signed char)-65;
unsigned short var_16 = (unsigned short)31657;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
