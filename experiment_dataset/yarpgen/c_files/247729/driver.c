#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)89;
unsigned short var_3 = (unsigned short)45844;
unsigned char var_4 = (unsigned char)109;
short var_5 = (short)-26177;
short var_9 = (short)19912;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16747440343461506784ULL;
int zero = 0;
int var_12 = -1407921462;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 257799583U;
unsigned int var_15 = 2490801600U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
