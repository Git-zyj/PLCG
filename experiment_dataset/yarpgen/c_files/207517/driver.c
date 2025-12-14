#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15212;
signed char var_4 = (signed char)-102;
signed char var_8 = (signed char)55;
unsigned short var_12 = (unsigned short)38702;
int zero = 0;
signed char var_13 = (signed char)-125;
long long int var_14 = -5469107335124125759LL;
int var_15 = -467389170;
signed char var_16 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
