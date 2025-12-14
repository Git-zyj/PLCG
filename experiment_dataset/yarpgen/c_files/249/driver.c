#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
int var_6 = -1145419798;
int var_7 = 2130074347;
unsigned long long int var_9 = 6324987876533206080ULL;
int zero = 0;
signed char var_15 = (signed char)-117;
int var_16 = -3308381;
void init() {
}

void checksum() {
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
