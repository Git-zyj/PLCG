#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
signed char var_4 = (signed char)-101;
signed char var_5 = (signed char)81;
signed char var_9 = (signed char)34;
signed char var_12 = (signed char)-108;
signed char var_14 = (signed char)103;
int zero = 0;
signed char var_17 = (signed char)126;
signed char var_18 = (signed char)116;
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
