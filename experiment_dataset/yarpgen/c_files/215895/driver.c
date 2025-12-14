#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
unsigned long long int var_6 = 1553807336871148630ULL;
unsigned int var_15 = 3908404924U;
unsigned int var_16 = 2943148551U;
int zero = 0;
unsigned long long int var_19 = 3223548572329540947ULL;
int var_20 = 2102130959;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
