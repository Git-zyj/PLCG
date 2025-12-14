#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -2063582941;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-15273;
long long int var_9 = 5177339205271107359LL;
int zero = 0;
int var_10 = 28656314;
short var_11 = (short)-24711;
signed char var_12 = (signed char)-41;
unsigned char var_13 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
