#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2197443053U;
_Bool var_10 = (_Bool)0;
unsigned short var_15 = (unsigned short)45654;
int zero = 0;
unsigned short var_16 = (unsigned short)44766;
signed char var_17 = (signed char)-127;
_Bool var_18 = (_Bool)1;
int var_19 = -363973825;
signed char var_20 = (signed char)26;
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
