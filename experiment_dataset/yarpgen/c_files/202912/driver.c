#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1685741638;
int var_7 = 44643060;
unsigned long long int var_14 = 6625962128442016188ULL;
short var_15 = (short)-19912;
int zero = 0;
unsigned long long int var_20 = 5681810330853252055ULL;
int var_21 = 1121325076;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
