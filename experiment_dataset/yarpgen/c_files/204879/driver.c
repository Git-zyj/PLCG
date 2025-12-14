#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12301106492471128889ULL;
unsigned long long int var_4 = 348155513299150558ULL;
short var_7 = (short)13188;
unsigned int var_8 = 1649826794U;
signed char var_10 = (signed char)12;
signed char var_12 = (signed char)-22;
short var_14 = (short)19371;
int zero = 0;
short var_16 = (short)25829;
unsigned int var_17 = 3882857498U;
signed char var_18 = (signed char)-88;
unsigned int var_19 = 82086190U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
