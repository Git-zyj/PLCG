#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -982876312;
unsigned long long int var_5 = 11814772586761334488ULL;
unsigned short var_6 = (unsigned short)44638;
unsigned short var_7 = (unsigned short)9079;
unsigned int var_8 = 963074944U;
unsigned long long int var_9 = 33341954688845452ULL;
long long int var_12 = 7535195983684366104LL;
unsigned int var_14 = 2721010029U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1720727236U;
signed char var_17 = (signed char)97;
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
