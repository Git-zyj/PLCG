#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)8;
long long int var_6 = -1233452420808061461LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_13 = (short)-19222;
unsigned char var_15 = (unsigned char)214;
long long int var_16 = 3677036730161251694LL;
int zero = 0;
unsigned int var_17 = 3317000903U;
short var_18 = (short)-9482;
void init() {
}

void checksum() {
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
