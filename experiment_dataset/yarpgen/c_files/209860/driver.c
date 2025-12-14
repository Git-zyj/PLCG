#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
unsigned char var_5 = (unsigned char)26;
long long int var_6 = -5890183039070788420LL;
unsigned long long int var_10 = 16127217730205299458ULL;
int var_11 = -650274369;
short var_12 = (short)-12715;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 1010158772U;
int zero = 0;
signed char var_17 = (signed char)-79;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
