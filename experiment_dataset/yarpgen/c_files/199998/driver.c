#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned char var_5 = (unsigned char)82;
unsigned short var_11 = (unsigned short)51877;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3559970812U;
short var_14 = (short)-28309;
unsigned char var_15 = (unsigned char)68;
int var_16 = -691669087;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
