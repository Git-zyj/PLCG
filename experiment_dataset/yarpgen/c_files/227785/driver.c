#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49079;
unsigned long long int var_2 = 14612207379018416467ULL;
short var_7 = (short)384;
unsigned int var_10 = 3468803058U;
int zero = 0;
short var_11 = (short)28708;
short var_12 = (short)-26523;
short var_13 = (short)18567;
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
