#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3504921984U;
short var_3 = (short)-13146;
int var_5 = 210928375;
unsigned long long int var_6 = 4460358378311472577ULL;
long long int var_9 = -4022845541142034042LL;
unsigned long long int var_10 = 18335258099874244949ULL;
unsigned short var_12 = (unsigned short)23378;
int var_14 = 319908155;
int zero = 0;
unsigned long long int var_15 = 8559103750775682591ULL;
signed char var_16 = (signed char)8;
unsigned short var_17 = (unsigned short)56292;
long long int var_18 = -2212419976001431048LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
