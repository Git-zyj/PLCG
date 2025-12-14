#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1957339535U;
_Bool var_5 = (_Bool)1;
int var_9 = 1179088919;
signed char var_10 = (signed char)-72;
unsigned int var_18 = 2920293140U;
short var_19 = (short)23132;
int zero = 0;
unsigned short var_20 = (unsigned short)23738;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
