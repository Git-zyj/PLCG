#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = -2793200814569465822LL;
signed char var_6 = (signed char)-113;
unsigned int var_7 = 2992164379U;
unsigned long long int var_8 = 10809479040442353358ULL;
long long int var_9 = -4461817575940973396LL;
long long int var_10 = 6508041353236616709LL;
unsigned short var_12 = (unsigned short)37020;
unsigned short var_13 = (unsigned short)24373;
long long int var_14 = 5621205972600881722LL;
int zero = 0;
long long int var_15 = -654856532996211738LL;
unsigned int var_16 = 1754723791U;
unsigned long long int var_17 = 15788283547207432306ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
