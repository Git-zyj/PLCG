#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2752567753U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)9046;
_Bool var_11 = (_Bool)1;
long long int var_15 = -252633890434827595LL;
int zero = 0;
unsigned short var_17 = (unsigned short)55531;
signed char var_18 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
