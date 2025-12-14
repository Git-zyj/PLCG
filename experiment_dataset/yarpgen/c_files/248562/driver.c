#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_10 = -1572401001;
long long int var_12 = -6501169400291971209LL;
signed char var_13 = (signed char)-48;
unsigned short var_16 = (unsigned short)18590;
int zero = 0;
unsigned int var_18 = 223885270U;
short var_19 = (short)-3067;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
