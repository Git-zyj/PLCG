#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6191480897523214703LL;
int var_1 = -2044492196;
unsigned char var_4 = (unsigned char)2;
int zero = 0;
long long int var_10 = 5427036157659024078LL;
short var_11 = (short)29885;
int var_12 = 228109331;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
