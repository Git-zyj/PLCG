#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29624;
short var_1 = (short)-26718;
unsigned short var_5 = (unsigned short)8981;
long long int var_6 = 8893417886899509238LL;
int var_7 = 340090149;
unsigned char var_8 = (unsigned char)83;
short var_10 = (short)-11596;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4293740050U;
unsigned int var_14 = 360807729U;
int var_15 = 1160242064;
void init() {
}

void checksum() {
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
