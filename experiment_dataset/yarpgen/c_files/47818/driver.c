#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 3301216327U;
signed char var_5 = (signed char)-57;
unsigned long long int var_8 = 10786772816361527938ULL;
unsigned int var_9 = 4182822707U;
unsigned int var_10 = 2055122106U;
short var_11 = (short)-6350;
int zero = 0;
signed char var_12 = (signed char)79;
signed char var_13 = (signed char)79;
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
