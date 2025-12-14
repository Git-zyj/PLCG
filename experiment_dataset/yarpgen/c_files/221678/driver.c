#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned long long int var_4 = 18182033556256536275ULL;
unsigned short var_5 = (unsigned short)8854;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 17662835200305589554ULL;
signed char var_13 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
