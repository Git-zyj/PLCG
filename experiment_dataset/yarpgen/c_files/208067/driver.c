#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 709404492;
int var_1 = -198287599;
unsigned long long int var_2 = 2109717368464493072ULL;
signed char var_3 = (signed char)-22;
unsigned char var_4 = (unsigned char)73;
short var_6 = (short)13623;
unsigned char var_9 = (unsigned char)100;
long long int var_11 = -1355269603345997751LL;
short var_13 = (short)29537;
int zero = 0;
short var_15 = (short)8436;
long long int var_16 = -3488158551322749627LL;
int var_17 = 489093597;
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
