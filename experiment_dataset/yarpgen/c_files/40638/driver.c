#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
int var_3 = -1394813962;
unsigned long long int var_4 = 9976855139807736987ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3996275755U;
unsigned long long int var_7 = 2138953123534386102ULL;
signed char var_9 = (signed char)-2;
signed char var_11 = (signed char)-126;
int zero = 0;
short var_12 = (short)-5274;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
