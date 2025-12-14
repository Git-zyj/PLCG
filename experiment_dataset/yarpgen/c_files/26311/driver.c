#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)223;
long long int var_6 = 1267310088605173094LL;
signed char var_7 = (signed char)73;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 513904613U;
int zero = 0;
int var_18 = 1503467366;
unsigned short var_19 = (unsigned short)29541;
short var_20 = (short)22854;
unsigned short var_21 = (unsigned short)61053;
int var_22 = -640157504;
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
