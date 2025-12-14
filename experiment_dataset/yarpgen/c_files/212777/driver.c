#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5653706510298267100LL;
unsigned int var_2 = 1421614760U;
int var_3 = 458813219;
int var_4 = 98119544;
unsigned int var_5 = 1637096386U;
unsigned short var_6 = (unsigned short)15617;
long long int var_7 = -8372738632197780677LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7933612912818693800LL;
int var_19 = -1315006147;
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
