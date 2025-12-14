#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
short var_2 = (short)1749;
unsigned short var_3 = (unsigned short)22935;
unsigned int var_4 = 2092712853U;
unsigned int var_6 = 133553800U;
int zero = 0;
int var_10 = 995647663;
unsigned long long int var_11 = 7097586942364032545ULL;
short var_12 = (short)18002;
unsigned int var_13 = 95706481U;
unsigned short var_14 = (unsigned short)41697;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
