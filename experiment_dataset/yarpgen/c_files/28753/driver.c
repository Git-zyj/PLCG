#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2447138341U;
unsigned int var_3 = 4166667008U;
short var_5 = (short)29586;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_9 = 642919710504351205LL;
int zero = 0;
short var_11 = (short)-16023;
signed char var_12 = (signed char)-45;
long long int var_13 = -5739431956401430969LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)15393;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
