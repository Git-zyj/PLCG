#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1907428722U;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-37;
unsigned long long int var_7 = 8782037227161002197ULL;
signed char var_8 = (signed char)28;
int zero = 0;
int var_11 = 506950235;
short var_12 = (short)-23195;
int var_13 = 1508650948;
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
