#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned int var_1 = 2418489814U;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)164;
signed char var_6 = (signed char)88;
unsigned char var_9 = (unsigned char)174;
int zero = 0;
unsigned short var_15 = (unsigned short)25675;
short var_16 = (short)24548;
unsigned short var_17 = (unsigned short)27214;
unsigned short var_18 = (unsigned short)44145;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
