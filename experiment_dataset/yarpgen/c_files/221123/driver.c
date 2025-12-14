#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6116834104087403266ULL;
long long int var_14 = 295698964285530737LL;
unsigned long long int var_15 = 7383527152899547961ULL;
int zero = 0;
unsigned long long int var_18 = 13306923813162113286ULL;
int var_19 = -556396129;
signed char var_20 = (signed char)13;
void init() {
}

void checksum() {
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
