#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1616726819;
unsigned int var_1 = 98129527U;
unsigned short var_3 = (unsigned short)61999;
unsigned int var_9 = 558456913U;
unsigned long long int var_11 = 14574798889573668735ULL;
unsigned int var_12 = 3032649955U;
unsigned short var_15 = (unsigned short)35984;
int zero = 0;
unsigned short var_20 = (unsigned short)34447;
signed char var_21 = (signed char)-123;
void init() {
}

void checksum() {
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
