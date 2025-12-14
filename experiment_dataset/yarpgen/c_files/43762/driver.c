#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23499;
_Bool var_3 = (_Bool)0;
unsigned long long int var_12 = 15171638090014123093ULL;
signed char var_14 = (signed char)-44;
signed char var_17 = (signed char)21;
int zero = 0;
unsigned char var_18 = (unsigned char)233;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)223;
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
