#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1959739856;
long long int var_3 = 3388151468037705958LL;
_Bool var_5 = (_Bool)1;
unsigned short var_14 = (unsigned short)16624;
int zero = 0;
short var_20 = (short)-23145;
unsigned int var_21 = 3403094438U;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
