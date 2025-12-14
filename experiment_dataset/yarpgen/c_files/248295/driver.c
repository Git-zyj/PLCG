#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 773517550U;
unsigned short var_4 = (unsigned short)25067;
unsigned long long int var_6 = 13160740539031202708ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)116;
int var_12 = 1498821904;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
