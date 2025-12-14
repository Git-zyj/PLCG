#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5767;
signed char var_3 = (signed char)-126;
short var_4 = (short)-28269;
int var_5 = 2018848092;
long long int var_7 = -4652440597215353789LL;
int zero = 0;
int var_17 = -1636308259;
unsigned int var_18 = 666637654U;
short var_19 = (short)-14785;
void init() {
}

void checksum() {
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
