#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3606002319U;
unsigned int var_9 = 1830634527U;
signed char var_10 = (signed char)-31;
unsigned int var_11 = 897035822U;
unsigned char var_13 = (unsigned char)222;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1814444440;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
