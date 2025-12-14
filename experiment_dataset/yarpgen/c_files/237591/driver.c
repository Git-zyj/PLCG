#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3192293867500676758LL;
int var_4 = -1082030461;
signed char var_6 = (signed char)-105;
signed char var_11 = (signed char)107;
unsigned char var_17 = (unsigned char)63;
int zero = 0;
unsigned char var_18 = (unsigned char)219;
signed char var_19 = (signed char)77;
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
