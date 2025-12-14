#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)46;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 18228222292434656627ULL;
signed char var_6 = (signed char)-65;
signed char var_7 = (signed char)60;
unsigned char var_8 = (unsigned char)178;
int zero = 0;
signed char var_10 = (signed char)-59;
long long int var_11 = 7644646736259950312LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
