#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)184;
_Bool var_7 = (_Bool)0;
unsigned char var_14 = (unsigned char)5;
int zero = 0;
int var_18 = 692514678;
long long int var_19 = 9208639901518010210LL;
signed char var_20 = (signed char)41;
int var_21 = 2064674403;
int var_22 = -2144308870;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
