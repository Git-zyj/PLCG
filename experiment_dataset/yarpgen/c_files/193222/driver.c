#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)62502;
unsigned long long int var_6 = 8005971229188709812ULL;
short var_7 = (short)-4869;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 536497028U;
short var_13 = (short)8640;
int zero = 0;
unsigned int var_18 = 2912397722U;
_Bool var_19 = (_Bool)1;
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
