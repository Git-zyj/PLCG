#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-56;
unsigned int var_9 = 3836350605U;
signed char var_10 = (signed char)5;
unsigned int var_13 = 1160611812U;
int zero = 0;
unsigned int var_16 = 882038468U;
signed char var_17 = (signed char)-104;
signed char var_18 = (signed char)31;
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
