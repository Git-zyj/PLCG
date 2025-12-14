#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6218815120079924823ULL;
unsigned long long int var_13 = 12707637631513248582ULL;
unsigned short var_14 = (unsigned short)40980;
int zero = 0;
long long int var_20 = 5966158218613535512LL;
unsigned long long int var_21 = 5485687435285029706ULL;
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
