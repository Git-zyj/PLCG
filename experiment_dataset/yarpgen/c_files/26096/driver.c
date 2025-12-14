#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3773240129U;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-17096;
unsigned short var_8 = (unsigned short)4850;
unsigned short var_9 = (unsigned short)47908;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2926214113U;
void init() {
}

void checksum() {
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
