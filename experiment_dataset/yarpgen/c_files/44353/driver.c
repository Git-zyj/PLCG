#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)6431;
unsigned char var_9 = (unsigned char)237;
unsigned long long int var_10 = 17626704929295901757ULL;
int zero = 0;
unsigned long long int var_13 = 17305347214336613732ULL;
long long int var_14 = -6493087768649852469LL;
int var_15 = -1782272992;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
