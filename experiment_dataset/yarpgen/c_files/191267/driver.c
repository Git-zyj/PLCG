#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned int var_4 = 2002716342U;
signed char var_5 = (signed char)-21;
unsigned long long int var_7 = 6746198483250365077ULL;
signed char var_10 = (signed char)9;
unsigned int var_12 = 235576267U;
int zero = 0;
short var_14 = (short)-1659;
int var_15 = -1649278832;
void init() {
}

void checksum() {
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
