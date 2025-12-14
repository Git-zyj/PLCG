#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1289641902;
unsigned int var_2 = 3110511228U;
short var_3 = (short)-8032;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 134369664U;
unsigned int var_9 = 2617376810U;
unsigned short var_10 = (unsigned short)31374;
int zero = 0;
unsigned char var_12 = (unsigned char)180;
signed char var_13 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
