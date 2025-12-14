#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)28252;
short var_7 = (short)-24070;
int var_9 = -1427860511;
int var_10 = 1390405571;
short var_11 = (short)-25939;
int zero = 0;
unsigned short var_12 = (unsigned short)23841;
signed char var_13 = (signed char)-116;
short var_14 = (short)-11131;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
