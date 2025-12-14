#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38126;
signed char var_1 = (signed char)-47;
unsigned long long int var_3 = 10578289278098142862ULL;
unsigned long long int var_7 = 11761956388892290543ULL;
int var_8 = -1266222417;
int var_9 = 1642946799;
unsigned int var_10 = 3072699227U;
signed char var_11 = (signed char)-24;
int var_12 = 132087310;
int zero = 0;
unsigned short var_13 = (unsigned short)24349;
unsigned short var_14 = (unsigned short)28882;
signed char var_15 = (signed char)93;
void init() {
}

void checksum() {
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
