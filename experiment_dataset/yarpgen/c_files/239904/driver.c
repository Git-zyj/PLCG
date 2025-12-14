#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-3;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 797258786U;
unsigned char var_11 = (unsigned char)169;
unsigned long long int var_12 = 13987356669875871798ULL;
int zero = 0;
signed char var_18 = (signed char)-6;
unsigned char var_19 = (unsigned char)242;
long long int var_20 = 2696168474825142271LL;
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
