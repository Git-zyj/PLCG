#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1407302781U;
int var_9 = 1762350004;
long long int var_10 = 820080690317348645LL;
int var_14 = -1228545478;
int zero = 0;
unsigned long long int var_18 = 17733787825057044756ULL;
unsigned int var_19 = 2758919967U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
