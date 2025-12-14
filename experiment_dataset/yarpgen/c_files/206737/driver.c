#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 8583849907354256030ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 2068792360U;
unsigned long long int var_15 = 8569909260423357422ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)3613;
unsigned long long int var_21 = 8197865406693095505ULL;
unsigned short var_22 = (unsigned short)15189;
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
