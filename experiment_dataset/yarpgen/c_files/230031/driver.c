#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18090963941262701134ULL;
unsigned long long int var_8 = 9521311048123121100ULL;
int zero = 0;
long long int var_10 = 5727045284702574965LL;
unsigned long long int var_11 = 8606744185392346122ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
