#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
short var_1 = (short)10788;
short var_2 = (short)-30910;
unsigned short var_8 = (unsigned short)14772;
unsigned char var_9 = (unsigned char)6;
int var_11 = -1265009382;
int var_13 = -1732444849;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3324697135U;
unsigned long long int var_16 = 10876809082756160787ULL;
void init() {
}

void checksum() {
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
