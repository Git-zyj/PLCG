#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3409737890590313514LL;
unsigned short var_3 = (unsigned short)54556;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6579188169054845941ULL;
int var_13 = -959854524;
int zero = 0;
long long int var_15 = 782058123280360140LL;
long long int var_16 = -7846470909463613139LL;
unsigned long long int var_17 = 16801604788286839371ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
