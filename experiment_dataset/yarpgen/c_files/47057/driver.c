#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13220743816787016711ULL;
int var_4 = 1786234973;
unsigned short var_7 = (unsigned short)63293;
signed char var_8 = (signed char)-82;
signed char var_9 = (signed char)4;
int var_12 = 266469026;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)22590;
unsigned long long int var_20 = 4483746287453055362ULL;
int var_21 = 1437598091;
unsigned long long int var_22 = 4959846925524767066ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
