#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
signed char var_3 = (signed char)102;
signed char var_8 = (signed char)-98;
signed char var_9 = (signed char)103;
signed char var_11 = (signed char)42;
signed char var_12 = (signed char)-72;
int zero = 0;
signed char var_14 = (signed char)85;
signed char var_15 = (signed char)-76;
signed char var_16 = (signed char)-12;
signed char var_17 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
