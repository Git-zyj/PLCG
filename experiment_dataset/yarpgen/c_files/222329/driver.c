#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1930128332;
long long int var_5 = 4282034620326622068LL;
long long int var_6 = -676361669999528262LL;
long long int var_10 = -6333057417041665151LL;
long long int var_11 = -3307682853368646664LL;
unsigned int var_16 = 2203894194U;
int zero = 0;
long long int var_17 = 5991515653264208532LL;
long long int var_18 = 4769333897495991765LL;
unsigned int var_19 = 499658154U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
