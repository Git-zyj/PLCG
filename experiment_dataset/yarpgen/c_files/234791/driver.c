#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27353;
short var_3 = (short)-17395;
long long int var_8 = -4194710188800205214LL;
int zero = 0;
short var_13 = (short)14464;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 15716618106865489397ULL;
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
