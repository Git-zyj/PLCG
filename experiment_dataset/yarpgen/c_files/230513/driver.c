#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1591688822;
int var_1 = -345804992;
int var_2 = -383776003;
int var_3 = -108887709;
int var_6 = -38998587;
int var_8 = 1019177975;
int var_9 = 448447594;
int var_10 = -400830754;
int zero = 0;
int var_11 = -528616675;
int var_12 = -630204713;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
