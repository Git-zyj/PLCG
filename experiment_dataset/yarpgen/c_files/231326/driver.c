#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 7371059095626055592LL;
long long int var_13 = -5711884971917301277LL;
int zero = 0;
unsigned long long int var_17 = 14933382036747783981ULL;
unsigned short var_18 = (unsigned short)14360;
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
