#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52818;
unsigned long long int var_3 = 760473743767269970ULL;
long long int var_4 = 1681134077443267257LL;
unsigned int var_5 = 962005870U;
long long int var_7 = 4282677628879974432LL;
unsigned char var_8 = (unsigned char)206;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3163887910351613325LL;
int zero = 0;
unsigned long long int var_18 = 3432999430337222120ULL;
short var_19 = (short)-20852;
short var_20 = (short)5426;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
