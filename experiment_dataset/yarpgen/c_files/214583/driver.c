#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -799586459;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3948569063U;
unsigned long long int var_4 = 2567040496515547986ULL;
unsigned char var_5 = (unsigned char)5;
unsigned char var_6 = (unsigned char)74;
unsigned long long int var_10 = 7891209113755671767ULL;
int zero = 0;
unsigned long long int var_11 = 5748458962382339851ULL;
long long int var_12 = -6589105378135152193LL;
long long int var_13 = 9017678763256148837LL;
unsigned int var_14 = 897789296U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
