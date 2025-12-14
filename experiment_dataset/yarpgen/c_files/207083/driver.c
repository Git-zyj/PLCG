#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5885905133772756508LL;
unsigned int var_1 = 3166957618U;
unsigned int var_2 = 577590604U;
unsigned char var_3 = (unsigned char)98;
signed char var_5 = (signed char)36;
unsigned int var_7 = 3271456948U;
short var_11 = (short)-1686;
int zero = 0;
unsigned long long int var_12 = 13358093858578463177ULL;
unsigned int var_13 = 2720400337U;
void init() {
}

void checksum() {
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
