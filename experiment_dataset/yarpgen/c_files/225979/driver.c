#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2853749469222923457LL;
unsigned long long int var_5 = 4094370931326733273ULL;
int var_7 = 126842759;
unsigned char var_9 = (unsigned char)28;
short var_11 = (short)31507;
int var_15 = 394735551;
int zero = 0;
unsigned long long int var_20 = 1588665480803955984ULL;
unsigned char var_21 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
