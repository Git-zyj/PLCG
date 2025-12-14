#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
short var_1 = (short)25985;
unsigned short var_2 = (unsigned short)48554;
short var_6 = (short)32388;
int var_8 = 443807696;
unsigned short var_9 = (unsigned short)17723;
unsigned short var_11 = (unsigned short)4914;
unsigned int var_12 = 3858898588U;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)66;
int zero = 0;
unsigned char var_17 = (unsigned char)82;
unsigned long long int var_18 = 15005010351013507179ULL;
int var_19 = -720444482;
int var_20 = -1821026517;
unsigned int var_21 = 3700829612U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
