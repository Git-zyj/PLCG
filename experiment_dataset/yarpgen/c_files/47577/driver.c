#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-58;
signed char var_8 = (signed char)-22;
signed char var_12 = (signed char)-2;
unsigned char var_13 = (unsigned char)157;
unsigned long long int var_15 = 14124376812016876219ULL;
long long int var_16 = 2642091007836327589LL;
int zero = 0;
unsigned long long int var_17 = 2484135019762870791ULL;
_Bool var_18 = (_Bool)0;
int var_19 = -1173800959;
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
