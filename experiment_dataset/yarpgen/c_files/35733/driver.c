#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2964572042U;
short var_8 = (short)-7289;
unsigned long long int var_9 = 39490381661708257ULL;
unsigned int var_13 = 3446904711U;
signed char var_16 = (signed char)-18;
int zero = 0;
signed char var_17 = (signed char)-57;
short var_18 = (short)13743;
void init() {
}

void checksum() {
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
