#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
unsigned long long int var_4 = 9388989430826117028ULL;
int var_8 = 924413088;
unsigned long long int var_9 = 15496242633159155676ULL;
unsigned long long int var_10 = 11184001283976811983ULL;
unsigned long long int var_11 = 9850218580282721297ULL;
short var_12 = (short)-10466;
signed char var_13 = (signed char)-24;
int zero = 0;
unsigned short var_14 = (unsigned short)57588;
short var_15 = (short)21340;
_Bool var_16 = (_Bool)0;
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
