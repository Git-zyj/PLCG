#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3843;
short var_8 = (short)29224;
unsigned long long int var_12 = 1471971268813214716ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)156;
unsigned long long int var_14 = 15546841712285990112ULL;
unsigned long long int var_15 = 16146873890620285040ULL;
short var_16 = (short)-20380;
unsigned long long int var_17 = 8477448042575394466ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
