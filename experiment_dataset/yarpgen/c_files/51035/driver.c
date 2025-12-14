#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_11 = -7343750015498721477LL;
signed char var_14 = (signed char)16;
signed char var_15 = (signed char)-115;
long long int var_19 = -8606978310459221837LL;
int zero = 0;
signed char var_20 = (signed char)19;
signed char var_21 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
