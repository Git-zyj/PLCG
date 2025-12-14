#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-11170;
signed char var_6 = (signed char)-74;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)34656;
int zero = 0;
unsigned long long int var_19 = 11759148239499895873ULL;
unsigned int var_20 = 1084148594U;
void init() {
}

void checksum() {
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
