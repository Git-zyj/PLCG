#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2814235972U;
long long int var_8 = 5176107104076340718LL;
short var_9 = (short)-17;
int zero = 0;
long long int var_14 = 3365090426480462608LL;
short var_15 = (short)-12575;
short var_16 = (short)-23887;
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
