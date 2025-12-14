#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10451806560643176431ULL;
long long int var_10 = 149003878548938646LL;
int zero = 0;
long long int var_15 = -2834586478895851101LL;
long long int var_16 = 5313325968725991617LL;
signed char var_17 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
