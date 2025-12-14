#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
short var_2 = (short)12810;
unsigned long long int var_4 = 15911839175312265737ULL;
long long int var_5 = 8494017732366820957LL;
signed char var_6 = (signed char)-47;
short var_8 = (short)13196;
short var_9 = (short)-2682;
int zero = 0;
unsigned int var_10 = 1038080725U;
unsigned long long int var_11 = 16726273584418184950ULL;
short var_12 = (short)-8662;
short var_13 = (short)4626;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
