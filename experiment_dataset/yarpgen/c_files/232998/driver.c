#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)115;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-16075;
signed char var_13 = (signed char)78;
long long int var_19 = 8949062504235665696LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3794071389U;
int var_22 = 450905662;
_Bool var_23 = (_Bool)0;
long long int var_24 = -2867812692884672937LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
