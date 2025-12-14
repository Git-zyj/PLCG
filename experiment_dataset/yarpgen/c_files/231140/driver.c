#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -548730783;
unsigned int var_3 = 654225576U;
unsigned long long int var_5 = 14003708846947704963ULL;
unsigned short var_6 = (unsigned short)63606;
short var_7 = (short)-21247;
signed char var_8 = (signed char)92;
unsigned short var_9 = (unsigned short)43844;
int zero = 0;
int var_12 = -43002358;
short var_13 = (short)-25566;
unsigned int var_14 = 329573818U;
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
