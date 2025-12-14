#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 825489169877636536ULL;
unsigned long long int var_4 = 9051578244951898760ULL;
signed char var_5 = (signed char)-39;
signed char var_6 = (signed char)24;
int var_7 = 573441355;
short var_9 = (short)-24172;
int zero = 0;
int var_12 = -212173323;
int var_13 = -495408721;
long long int var_14 = -7699353196255537031LL;
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
