#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
signed char var_3 = (signed char)7;
signed char var_5 = (signed char)108;
signed char var_8 = (signed char)37;
signed char var_11 = (signed char)-108;
signed char var_12 = (signed char)20;
signed char var_13 = (signed char)-106;
signed char var_14 = (signed char)61;
signed char var_15 = (signed char)20;
int zero = 0;
signed char var_16 = (signed char)113;
signed char var_17 = (signed char)-72;
signed char var_18 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
