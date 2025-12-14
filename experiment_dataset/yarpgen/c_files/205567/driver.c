#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11633209634209833654ULL;
int var_6 = -1053028398;
_Bool var_8 = (_Bool)1;
int var_9 = -420261023;
short var_10 = (short)-4217;
_Bool var_11 = (_Bool)0;
unsigned long long int var_16 = 11996443327917564495ULL;
int zero = 0;
int var_20 = 1885901819;
int var_21 = -1848452661;
unsigned char var_22 = (unsigned char)159;
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
