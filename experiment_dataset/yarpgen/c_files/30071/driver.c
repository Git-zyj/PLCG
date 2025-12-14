#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15913;
int var_6 = -719607029;
signed char var_10 = (signed char)-46;
int var_11 = 1412766997;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10420514512412530989ULL;
unsigned short var_15 = (unsigned short)49215;
unsigned int var_16 = 3316507191U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
