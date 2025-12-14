#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30671;
signed char var_6 = (signed char)-6;
signed char var_8 = (signed char)-21;
unsigned long long int var_13 = 5055151893237549419ULL;
unsigned int var_15 = 3417406014U;
int zero = 0;
signed char var_18 = (signed char)41;
unsigned int var_19 = 598776615U;
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
