#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2619286336U;
short var_4 = (short)31144;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)11851;
long long int var_12 = -5133638612984019098LL;
short var_13 = (short)4438;
void init() {
}

void checksum() {
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
