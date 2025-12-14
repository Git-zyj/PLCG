#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
unsigned long long int var_5 = 18125775594359451834ULL;
unsigned int var_6 = 2973336442U;
unsigned long long int var_11 = 6031174242211305193ULL;
signed char var_12 = (signed char)71;
_Bool var_13 = (_Bool)0;
unsigned char var_17 = (unsigned char)122;
unsigned long long int var_18 = 2627155097074529290ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)176;
long long int var_21 = 2954751091877373349LL;
int var_22 = 934917152;
unsigned short var_23 = (unsigned short)29226;
int var_24 = -977917235;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
