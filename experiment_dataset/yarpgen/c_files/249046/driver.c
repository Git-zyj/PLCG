#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14023911901259349541ULL;
_Bool var_10 = (_Bool)1;
long long int var_13 = 4227354493694519134LL;
int zero = 0;
unsigned char var_16 = (unsigned char)54;
unsigned char var_17 = (unsigned char)181;
int var_18 = 2140497423;
_Bool var_19 = (_Bool)0;
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
