#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
int var_4 = -657928595;
signed char var_6 = (signed char)-68;
short var_9 = (short)-2132;
unsigned int var_11 = 849016552U;
int zero = 0;
unsigned int var_13 = 1402458586U;
signed char var_14 = (signed char)42;
short var_15 = (short)-22825;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
