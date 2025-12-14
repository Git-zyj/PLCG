#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4838342311541686492LL;
long long int var_2 = 2021491397486388240LL;
unsigned char var_3 = (unsigned char)225;
unsigned char var_5 = (unsigned char)133;
unsigned long long int var_7 = 16467033006243200790ULL;
long long int var_8 = -7525151614235367276LL;
short var_10 = (short)17202;
unsigned int var_12 = 1968857418U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5600019544356247571ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
