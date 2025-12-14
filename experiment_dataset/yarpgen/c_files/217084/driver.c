#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5099;
unsigned long long int var_3 = 9388143839675466213ULL;
int zero = 0;
int var_13 = -1624193065;
unsigned long long int var_14 = 7605026740649072332ULL;
short var_15 = (short)-27940;
unsigned char var_16 = (unsigned char)178;
signed char var_17 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
