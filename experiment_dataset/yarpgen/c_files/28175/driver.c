#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)97;
signed char var_7 = (signed char)-69;
signed char var_9 = (signed char)127;
signed char var_14 = (signed char)-59;
int zero = 0;
signed char var_17 = (signed char)126;
signed char var_18 = (signed char)122;
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
