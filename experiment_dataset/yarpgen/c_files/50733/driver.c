#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6351425498756266383LL;
unsigned short var_3 = (unsigned short)7006;
short var_6 = (short)-20963;
unsigned char var_12 = (unsigned char)57;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 2296358798U;
unsigned short var_16 = (unsigned short)10419;
int zero = 0;
unsigned int var_19 = 3956791201U;
short var_20 = (short)6663;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
