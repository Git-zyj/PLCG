#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 4455366939893349320ULL;
unsigned long long int var_5 = 2332723754291924435ULL;
short var_7 = (short)31545;
_Bool var_9 = (_Bool)0;
int var_10 = -1111645097;
int zero = 0;
unsigned int var_16 = 612204102U;
short var_17 = (short)26937;
unsigned int var_18 = 3642485004U;
unsigned long long int var_19 = 1772521839691431963ULL;
int var_20 = -1268499160;
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
