#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)222;
int var_5 = 983872064;
unsigned long long int var_6 = 1603138310944416912ULL;
unsigned int var_8 = 3158043047U;
int zero = 0;
unsigned long long int var_18 = 12090253776129250291ULL;
unsigned char var_19 = (unsigned char)67;
void init() {
}

void checksum() {
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
