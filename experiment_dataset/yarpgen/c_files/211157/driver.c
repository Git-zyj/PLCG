#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23209;
unsigned short var_1 = (unsigned short)33353;
long long int var_6 = -190846748783621649LL;
long long int var_9 = 3962398411741047302LL;
int zero = 0;
short var_13 = (short)7811;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)219;
int var_16 = -2032277207;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
