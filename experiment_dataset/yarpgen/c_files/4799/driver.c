#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12099471940607127473ULL;
unsigned int var_2 = 1761668707U;
int zero = 0;
unsigned int var_17 = 2542146856U;
int var_18 = 588735619;
long long int var_19 = 3236824945531289577LL;
unsigned char var_20 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
