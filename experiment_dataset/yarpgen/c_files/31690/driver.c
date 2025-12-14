#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)78;
short var_2 = (short)13426;
int var_3 = 1591939737;
long long int var_4 = 1514368224376421733LL;
unsigned int var_9 = 684132042U;
signed char var_11 = (signed char)-102;
int zero = 0;
signed char var_12 = (signed char)114;
signed char var_13 = (signed char)77;
signed char var_14 = (signed char)21;
int var_15 = 149940206;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
