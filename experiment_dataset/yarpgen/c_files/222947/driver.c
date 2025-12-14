#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 922055872U;
short var_2 = (short)-6520;
unsigned char var_3 = (unsigned char)70;
short var_4 = (short)6272;
unsigned int var_5 = 1762927949U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1780724493U;
unsigned int var_9 = 3282776112U;
int zero = 0;
short var_10 = (short)30988;
long long int var_11 = 8978861590518067980LL;
int var_12 = -1040050793;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
