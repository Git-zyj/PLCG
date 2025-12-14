#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)26104;
unsigned int var_12 = 934345865U;
signed char var_14 = (signed char)-28;
unsigned int var_18 = 362830488U;
int zero = 0;
unsigned short var_19 = (unsigned short)32421;
int var_20 = 602792044;
long long int var_21 = -987794322305086835LL;
unsigned int var_22 = 3778522983U;
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
