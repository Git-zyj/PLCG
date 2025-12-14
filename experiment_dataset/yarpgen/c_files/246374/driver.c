#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -334358946554666750LL;
long long int var_4 = -4134413437094520521LL;
_Bool var_6 = (_Bool)0;
long long int var_8 = 4524731878888186305LL;
_Bool var_11 = (_Bool)0;
long long int var_13 = -3868691732502893741LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_17 = -3812542563311056008LL;
long long int var_18 = 4790341957722318116LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -2141837032562668585LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
