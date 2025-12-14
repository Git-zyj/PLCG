#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9030768809704424734LL;
short var_1 = (short)21818;
short var_4 = (short)25240;
long long int var_7 = -5757027257625772264LL;
signed char var_9 = (signed char)-101;
int zero = 0;
short var_13 = (short)-13847;
short var_14 = (short)30129;
long long int var_15 = 5598318382097551194LL;
void init() {
}

void checksum() {
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
