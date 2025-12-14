#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23280;
short var_5 = (short)-23482;
short var_8 = (short)31514;
short var_10 = (short)-28571;
short var_12 = (short)26234;
long long int var_18 = 7904977547953512240LL;
int zero = 0;
short var_19 = (short)-14552;
signed char var_20 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
