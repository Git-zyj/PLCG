#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 12640847159795981544ULL;
signed char var_10 = (signed char)28;
signed char var_17 = (signed char)-50;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1093078869U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-8484;
signed char var_23 = (signed char)21;
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
