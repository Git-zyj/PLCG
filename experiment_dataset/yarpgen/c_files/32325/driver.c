#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 984824416127217511ULL;
signed char var_2 = (signed char)78;
unsigned short var_9 = (unsigned short)61742;
_Bool var_10 = (_Bool)0;
int var_11 = 1117986111;
int var_12 = 1368003316;
short var_18 = (short)-8922;
int zero = 0;
short var_20 = (short)24556;
short var_21 = (short)3276;
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
