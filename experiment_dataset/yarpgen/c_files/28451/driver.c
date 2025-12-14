#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4292879534025388645ULL;
unsigned char var_1 = (unsigned char)127;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)7392;
short var_6 = (short)21039;
int var_7 = -1266303260;
short var_13 = (short)13690;
short var_14 = (short)-3011;
int zero = 0;
unsigned short var_16 = (unsigned short)54828;
unsigned short var_17 = (unsigned short)36177;
unsigned int var_18 = 576979005U;
void init() {
}

void checksum() {
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
