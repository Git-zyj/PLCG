#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5421943552953904095LL;
int var_3 = -1513216715;
unsigned long long int var_12 = 4637120102876197232ULL;
long long int var_13 = -7233004785173963489LL;
int zero = 0;
unsigned int var_17 = 3132035023U;
int var_18 = 1296704858;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
