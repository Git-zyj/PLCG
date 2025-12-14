#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3601341908U;
_Bool var_1 = (_Bool)0;
long long int var_2 = 1811410086479764034LL;
long long int var_5 = 8404968562593149105LL;
unsigned int var_10 = 4183078934U;
unsigned int var_13 = 306982080U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1464351319U;
long long int var_16 = 3172501414862427936LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
