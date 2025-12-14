#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_5 = 2626221479U;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 2693277912U;
unsigned long long int var_11 = 1121796358827195798ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 14971604917518816500ULL;
unsigned long long int var_21 = 1655609699208556960ULL;
unsigned long long int var_22 = 13968426874006827667ULL;
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
