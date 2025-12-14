#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)49;
signed char var_6 = (signed char)91;
signed char var_14 = (signed char)-101;
int zero = 0;
signed char var_16 = (signed char)-25;
signed char var_17 = (signed char)-3;
signed char var_18 = (signed char)72;
signed char var_19 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
