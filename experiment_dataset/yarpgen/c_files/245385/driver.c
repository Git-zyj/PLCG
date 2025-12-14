#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1432157966U;
_Bool var_2 = (_Bool)0;
unsigned short var_8 = (unsigned short)9537;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-127;
unsigned char var_20 = (unsigned char)244;
unsigned long long int var_21 = 3687671584298984948ULL;
signed char var_22 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
