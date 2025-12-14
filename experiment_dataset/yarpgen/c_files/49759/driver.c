#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-22;
unsigned int var_9 = 733072857U;
int zero = 0;
signed char var_13 = (signed char)-73;
unsigned int var_14 = 3888032612U;
long long int var_15 = 6355012913331069394LL;
unsigned char var_16 = (unsigned char)108;
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
