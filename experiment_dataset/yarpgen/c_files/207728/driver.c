#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-31022;
unsigned short var_9 = (unsigned short)63832;
_Bool var_10 = (_Bool)1;
short var_18 = (short)4305;
int zero = 0;
unsigned long long int var_19 = 3351719260413407565ULL;
unsigned short var_20 = (unsigned short)65362;
unsigned int var_21 = 3982565189U;
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
