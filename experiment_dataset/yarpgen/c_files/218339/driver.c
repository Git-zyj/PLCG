#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36467;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)7985;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)57422;
unsigned short var_10 = (unsigned short)65027;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)29403;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
