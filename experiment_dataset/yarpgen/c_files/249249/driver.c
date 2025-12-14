#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-3650;
unsigned int var_10 = 3302061528U;
signed char var_16 = (signed char)-121;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)120;
unsigned int var_21 = 891971148U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
