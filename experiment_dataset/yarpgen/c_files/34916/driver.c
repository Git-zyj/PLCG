#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23264;
signed char var_6 = (signed char)74;
unsigned long long int var_11 = 9082035200446448637ULL;
signed char var_17 = (signed char)31;
int zero = 0;
short var_18 = (short)8991;
signed char var_19 = (signed char)61;
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
