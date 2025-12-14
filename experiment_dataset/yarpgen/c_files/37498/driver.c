#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6704446624601775097LL;
unsigned long long int var_6 = 11559733278835995951ULL;
signed char var_8 = (signed char)-79;
unsigned long long int var_11 = 11735942801226413939ULL;
signed char var_13 = (signed char)-39;
int zero = 0;
long long int var_15 = 6062234001039849897LL;
signed char var_16 = (signed char)96;
short var_17 = (short)17599;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
