#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12589788459305086356ULL;
short var_1 = (short)-31224;
int var_2 = 1244151895;
unsigned int var_4 = 2946957372U;
int var_9 = -757973496;
unsigned char var_10 = (unsigned char)73;
short var_11 = (short)26628;
int var_14 = 1729067612;
int zero = 0;
signed char var_16 = (signed char)-95;
unsigned char var_17 = (unsigned char)137;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
