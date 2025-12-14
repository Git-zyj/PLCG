#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40574;
_Bool var_2 = (_Bool)1;
signed char var_8 = (signed char)-15;
unsigned short var_11 = (unsigned short)56272;
int zero = 0;
short var_16 = (short)-23293;
signed char var_17 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
