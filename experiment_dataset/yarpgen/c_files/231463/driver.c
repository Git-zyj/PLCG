#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
signed char var_2 = (signed char)61;
signed char var_3 = (signed char)-62;
unsigned int var_4 = 1417207421U;
unsigned long long int var_6 = 7767799743311240879ULL;
short var_7 = (short)20308;
long long int var_9 = -6276326592296391812LL;
int var_10 = -1138198773;
unsigned long long int var_12 = 4849698233323198766ULL;
int zero = 0;
signed char var_13 = (signed char)113;
signed char var_14 = (signed char)-15;
unsigned int var_15 = 4261971089U;
unsigned char var_16 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
