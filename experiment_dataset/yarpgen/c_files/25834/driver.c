#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)14928;
short var_5 = (short)-4556;
unsigned long long int var_6 = 6890517837865742317ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)110;
unsigned char var_21 = (unsigned char)214;
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
