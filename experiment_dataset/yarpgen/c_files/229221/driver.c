#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9732796427093652017ULL;
unsigned long long int var_9 = 7251283812132046849ULL;
unsigned long long int var_10 = 16453633779603873857ULL;
unsigned long long int var_12 = 7664000893683282601ULL;
unsigned long long int var_15 = 15689155991351349141ULL;
unsigned long long int var_16 = 17833582773481368396ULL;
int zero = 0;
int var_17 = 1651222328;
int var_18 = -127785379;
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
