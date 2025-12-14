#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11282317435267436370ULL;
unsigned short var_2 = (unsigned short)59101;
signed char var_3 = (signed char)16;
long long int var_4 = -3712009059331983497LL;
signed char var_5 = (signed char)27;
_Bool var_11 = (_Bool)0;
int var_13 = 1746584371;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-63;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)255;
signed char var_20 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
