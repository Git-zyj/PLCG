#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1393023819U;
unsigned int var_10 = 640707892U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)118;
unsigned int var_15 = 973771559U;
int zero = 0;
unsigned int var_16 = 1992714115U;
signed char var_17 = (signed char)-2;
signed char var_18 = (signed char)55;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
