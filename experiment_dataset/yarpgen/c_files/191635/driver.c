#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10977;
short var_6 = (short)-4420;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)205;
unsigned short var_14 = (unsigned short)23294;
unsigned int var_17 = 3233279548U;
int zero = 0;
unsigned int var_18 = 846500018U;
unsigned int var_19 = 2625694325U;
unsigned short var_20 = (unsigned short)18207;
int var_21 = 451454196;
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
