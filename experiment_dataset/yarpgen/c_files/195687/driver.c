#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7806561399774173574LL;
long long int var_2 = 6136218471265994565LL;
int var_4 = 835825107;
int var_8 = 115220409;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 1631575600U;
unsigned int var_14 = 521524986U;
void init() {
}

void checksum() {
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
