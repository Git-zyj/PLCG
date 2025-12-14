#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
signed char var_8 = (signed char)-61;
unsigned long long int var_11 = 16751512029182308507ULL;
int zero = 0;
unsigned int var_16 = 3844552724U;
unsigned short var_17 = (unsigned short)51581;
unsigned int var_18 = 808553999U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
