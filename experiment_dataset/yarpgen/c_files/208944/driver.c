#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
unsigned char var_4 = (unsigned char)50;
signed char var_5 = (signed char)-86;
signed char var_7 = (signed char)121;
unsigned short var_8 = (unsigned short)56338;
long long int var_13 = -5391969346284982863LL;
int zero = 0;
long long int var_15 = -8772685214723382733LL;
int var_16 = -244324064;
unsigned short var_17 = (unsigned short)7095;
int var_18 = -1131551198;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
