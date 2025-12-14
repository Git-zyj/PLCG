#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5838687820987614037LL;
signed char var_4 = (signed char)-75;
signed char var_12 = (signed char)-82;
signed char var_13 = (signed char)64;
int zero = 0;
int var_19 = 701317171;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 243868008589182212ULL;
long long int var_22 = -126617729245163900LL;
void init() {
}

void checksum() {
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
