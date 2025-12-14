#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)101;
unsigned long long int var_5 = 3436057716512487414ULL;
unsigned long long int var_9 = 12293425254666450142ULL;
signed char var_13 = (signed char)53;
int zero = 0;
unsigned long long int var_18 = 9910851567436178638ULL;
signed char var_19 = (signed char)39;
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
