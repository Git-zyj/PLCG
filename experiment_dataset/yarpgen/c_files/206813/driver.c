#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61478;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)180;
unsigned long long int var_12 = 13620369629757988089ULL;
unsigned int var_13 = 196477376U;
long long int var_16 = -1746383003371735238LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 11214052532779234693ULL;
signed char var_20 = (signed char)118;
void init() {
}

void checksum() {
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
