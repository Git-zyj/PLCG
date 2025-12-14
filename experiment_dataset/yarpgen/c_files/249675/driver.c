#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
short var_1 = (short)-30525;
unsigned short var_3 = (unsigned short)33621;
unsigned int var_4 = 3501508693U;
unsigned char var_8 = (unsigned char)194;
unsigned int var_9 = 2077582948U;
int zero = 0;
short var_11 = (short)30164;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
