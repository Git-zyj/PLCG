#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3891369952U;
short var_5 = (short)17106;
short var_7 = (short)17558;
short var_14 = (short)2464;
unsigned int var_18 = 3792151192U;
int zero = 0;
unsigned char var_20 = (unsigned char)133;
unsigned long long int var_21 = 12290589120009854715ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
