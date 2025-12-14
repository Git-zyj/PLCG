#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9156891008650324182LL;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 519846928U;
unsigned int var_13 = 1000754319U;
long long int var_14 = 1227499144624763702LL;
int zero = 0;
int var_20 = -1013045920;
_Bool var_21 = (_Bool)0;
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
