#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)16615;
signed char var_4 = (signed char)-87;
short var_9 = (short)25314;
int var_17 = 1082496884;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
unsigned int var_19 = 2295334165U;
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
