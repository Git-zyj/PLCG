#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1441028158247667370ULL;
unsigned int var_6 = 1655941816U;
short var_7 = (short)9447;
signed char var_10 = (signed char)86;
signed char var_13 = (signed char)116;
unsigned int var_17 = 1931921978U;
int zero = 0;
signed char var_18 = (signed char)-17;
signed char var_19 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
