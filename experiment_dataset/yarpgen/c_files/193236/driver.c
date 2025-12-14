#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 938030180U;
unsigned char var_1 = (unsigned char)126;
unsigned short var_3 = (unsigned short)14758;
int var_14 = 1113417869;
unsigned long long int var_15 = 14728498470051423598ULL;
int zero = 0;
unsigned long long int var_18 = 10498328634425364534ULL;
unsigned short var_19 = (unsigned short)8877;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
