#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2267125575U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-32;
signed char var_5 = (signed char)40;
long long int var_6 = -2893587654602925716LL;
unsigned int var_9 = 390684171U;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-25920;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)223;
unsigned char var_19 = (unsigned char)21;
int zero = 0;
short var_20 = (short)-16628;
unsigned char var_21 = (unsigned char)55;
long long int var_22 = -2885604771884625666LL;
signed char var_23 = (signed char)-16;
signed char var_24 = (signed char)-59;
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
