#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10036;
short var_1 = (short)-305;
short var_2 = (short)-16366;
unsigned char var_4 = (unsigned char)245;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7908521509505083903LL;
long long int var_10 = -8377209047850470505LL;
_Bool var_11 = (_Bool)1;
short var_13 = (short)8726;
unsigned int var_16 = 359840169U;
unsigned int var_18 = 315853397U;
unsigned int var_19 = 3281190400U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)98;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)45;
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
