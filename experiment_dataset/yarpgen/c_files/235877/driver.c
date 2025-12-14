#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8689;
short var_1 = (short)20490;
long long int var_3 = -7284339559894788650LL;
signed char var_5 = (signed char)-56;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)17086;
unsigned int var_13 = 4074602160U;
short var_14 = (short)23748;
short var_15 = (short)-25048;
void init() {
}

void checksum() {
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
