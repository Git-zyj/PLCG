#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 5847813644428234921LL;
short var_6 = (short)-15262;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-83;
unsigned char var_14 = (unsigned char)52;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-44;
unsigned long long int var_18 = 13714975247707287583ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
