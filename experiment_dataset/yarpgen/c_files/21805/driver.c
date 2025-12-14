#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)77;
unsigned char var_11 = (unsigned char)137;
unsigned char var_14 = (unsigned char)82;
_Bool var_15 = (_Bool)1;
short var_17 = (short)-1105;
unsigned int var_18 = 127727924U;
int zero = 0;
unsigned int var_19 = 2195244490U;
_Bool var_20 = (_Bool)1;
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
