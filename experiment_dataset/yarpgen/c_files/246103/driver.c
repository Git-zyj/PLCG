#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6913884390783094154LL;
int var_1 = 34764284;
unsigned int var_4 = 2104065307U;
unsigned short var_5 = (unsigned short)22895;
unsigned char var_6 = (unsigned char)162;
signed char var_7 = (signed char)88;
unsigned char var_11 = (unsigned char)33;
int zero = 0;
int var_16 = -420252100;
signed char var_17 = (signed char)-29;
long long int var_18 = -1255079181379995952LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
