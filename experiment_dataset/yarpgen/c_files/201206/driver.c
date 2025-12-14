#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4028926111U;
signed char var_9 = (signed char)-111;
signed char var_13 = (signed char)-56;
short var_16 = (short)-25550;
short var_17 = (short)-27765;
int zero = 0;
unsigned int var_18 = 3419443793U;
unsigned int var_19 = 2223313685U;
short var_20 = (short)-22066;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
