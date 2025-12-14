#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1583269615;
unsigned long long int var_5 = 8191564619763327435ULL;
unsigned long long int var_6 = 14052874805251641156ULL;
unsigned short var_9 = (unsigned short)24842;
int zero = 0;
long long int var_12 = -2769609904883801328LL;
int var_13 = 563885697;
void init() {
}

void checksum() {
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
