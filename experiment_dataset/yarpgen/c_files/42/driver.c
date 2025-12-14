#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)24;
unsigned long long int var_7 = 5166711839664825261ULL;
signed char var_9 = (signed char)64;
signed char var_13 = (signed char)23;
int zero = 0;
signed char var_16 = (signed char)-15;
signed char var_17 = (signed char)-79;
unsigned long long int var_18 = 14055582106673892258ULL;
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
