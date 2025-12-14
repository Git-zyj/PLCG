#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4222211413563989522ULL;
unsigned char var_3 = (unsigned char)69;
long long int var_4 = 1368648624340064721LL;
int var_5 = 873928830;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5957039876131250229LL;
int var_16 = 838639999;
int zero = 0;
unsigned char var_17 = (unsigned char)195;
unsigned char var_18 = (unsigned char)40;
signed char var_19 = (signed char)28;
void init() {
}

void checksum() {
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
