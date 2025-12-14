#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)17595;
short var_7 = (short)14710;
unsigned int var_11 = 2726942071U;
signed char var_13 = (signed char)-60;
long long int var_16 = -2360703124441086171LL;
int zero = 0;
unsigned short var_17 = (unsigned short)39050;
short var_18 = (short)-32716;
unsigned int var_19 = 3627293231U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
