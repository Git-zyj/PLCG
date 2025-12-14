#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-19415;
unsigned long long int var_10 = 5635708795857527720ULL;
int zero = 0;
unsigned long long int var_11 = 9985629807991005298ULL;
unsigned long long int var_12 = 16519588398919905404ULL;
short var_13 = (short)-8445;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
