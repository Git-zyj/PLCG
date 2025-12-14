#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16359561036823010620ULL;
unsigned long long int var_11 = 9306545956526511568ULL;
unsigned long long int var_14 = 12456643772098516489ULL;
int zero = 0;
unsigned long long int var_17 = 12980095975457308005ULL;
unsigned long long int var_18 = 6572911297376010175ULL;
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
