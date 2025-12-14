#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 688112034U;
short var_1 = (short)424;
unsigned char var_2 = (unsigned char)79;
unsigned int var_4 = 1760258074U;
signed char var_6 = (signed char)123;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 1257346361U;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)124;
unsigned long long int var_14 = 1505751568003482552ULL;
int zero = 0;
signed char var_15 = (signed char)0;
signed char var_16 = (signed char)-125;
long long int var_17 = -4608484507413521184LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
