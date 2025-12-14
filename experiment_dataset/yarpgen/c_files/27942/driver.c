#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23727;
unsigned long long int var_5 = 2613262176272026732ULL;
unsigned char var_6 = (unsigned char)107;
unsigned int var_10 = 1704491863U;
unsigned int var_11 = 758796860U;
unsigned long long int var_12 = 1561255084963988778ULL;
unsigned long long int var_17 = 10278136695086480429ULL;
int zero = 0;
unsigned int var_19 = 2677772068U;
unsigned long long int var_20 = 16910419068611859519ULL;
signed char var_21 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
