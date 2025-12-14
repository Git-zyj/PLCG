#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2281085267703466512ULL;
long long int var_13 = -4258245469797547051LL;
int zero = 0;
long long int var_14 = -7209014355008695947LL;
int var_15 = 1141169349;
unsigned long long int var_16 = 13982356131568226710ULL;
void init() {
}

void checksum() {
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
