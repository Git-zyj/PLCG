#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-88;
_Bool var_2 = (_Bool)1;
int var_5 = 147467494;
signed char var_10 = (signed char)19;
signed char var_11 = (signed char)23;
int var_13 = -2047432701;
long long int var_16 = -1450212967924322692LL;
int zero = 0;
signed char var_18 = (signed char)9;
unsigned int var_19 = 3067365287U;
unsigned short var_20 = (unsigned short)25780;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
