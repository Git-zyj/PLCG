#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 906158664060692701LL;
int var_5 = 1186614672;
unsigned char var_8 = (unsigned char)187;
short var_11 = (short)-11358;
int zero = 0;
unsigned long long int var_13 = 16692522603489730393ULL;
unsigned int var_14 = 3992875132U;
void init() {
}

void checksum() {
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
