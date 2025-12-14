#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
short var_1 = (short)-199;
_Bool var_2 = (_Bool)1;
short var_7 = (short)2164;
signed char var_9 = (signed char)72;
unsigned int var_10 = 1070212852U;
int var_11 = 1347395111;
long long int var_12 = 4098268060899155505LL;
signed char var_15 = (signed char)-83;
int zero = 0;
long long int var_18 = -3522196563768114082LL;
signed char var_19 = (signed char)88;
unsigned char var_20 = (unsigned char)140;
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
