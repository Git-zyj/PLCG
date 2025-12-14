#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4075869571U;
unsigned char var_3 = (unsigned char)233;
unsigned long long int var_4 = 15314247691463583980ULL;
signed char var_5 = (signed char)114;
short var_8 = (short)14807;
long long int var_9 = -2176407957797471698LL;
long long int var_10 = 479524278880208799LL;
unsigned char var_11 = (unsigned char)205;
unsigned short var_13 = (unsigned short)54380;
long long int var_14 = -2235509069177843985LL;
int zero = 0;
unsigned char var_19 = (unsigned char)132;
unsigned int var_20 = 492915213U;
unsigned short var_21 = (unsigned short)35593;
unsigned long long int var_22 = 9705881095133446730ULL;
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
