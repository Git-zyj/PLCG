#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 187468049U;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-118;
unsigned char var_14 = (unsigned char)8;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = 1175309419080716070LL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
