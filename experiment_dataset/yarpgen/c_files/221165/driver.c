#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10681504577552601221ULL;
long long int var_6 = -1644590183254024079LL;
short var_9 = (short)-11466;
int zero = 0;
long long int var_13 = 5838768741648398137LL;
long long int var_14 = -4370674096648930465LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
