#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56894;
unsigned long long int var_2 = 17882076790014911480ULL;
_Bool var_3 = (_Bool)0;
long long int var_5 = -4611595791731925358LL;
int var_7 = 186068655;
int zero = 0;
short var_10 = (short)-15025;
unsigned long long int var_11 = 14684396480513873970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
