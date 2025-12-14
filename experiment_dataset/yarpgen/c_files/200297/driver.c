#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 9606395888773143673ULL;
unsigned int var_10 = 2371241172U;
int zero = 0;
signed char var_16 = (signed char)-90;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10288486416746782665ULL;
short var_19 = (short)31647;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
