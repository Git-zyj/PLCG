#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2089376470U;
unsigned int var_5 = 4104250812U;
long long int var_9 = 9176290984701291195LL;
int zero = 0;
signed char var_12 = (signed char)24;
unsigned int var_13 = 3158261861U;
unsigned long long int var_14 = 9790779288740881126ULL;
void init() {
}

void checksum() {
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
