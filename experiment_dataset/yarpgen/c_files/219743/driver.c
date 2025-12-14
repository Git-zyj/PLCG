#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10934119812213169998ULL;
short var_7 = (short)-21774;
short var_8 = (short)-13318;
int zero = 0;
short var_11 = (short)-12663;
short var_12 = (short)-25658;
unsigned long long int var_13 = 7721595525942167140ULL;
short var_14 = (short)-14923;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
