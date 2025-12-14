#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43405;
int var_4 = -1235739616;
signed char var_5 = (signed char)40;
unsigned char var_8 = (unsigned char)36;
int zero = 0;
short var_11 = (short)-11972;
unsigned short var_12 = (unsigned short)29305;
int var_13 = -1193307255;
unsigned char var_14 = (unsigned char)26;
long long int var_15 = 2333396762640231659LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
