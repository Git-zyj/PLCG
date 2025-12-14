#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)22507;
unsigned long long int var_14 = 6601522819422281713ULL;
unsigned int var_18 = 3662918158U;
int zero = 0;
int var_19 = 1539320966;
long long int var_20 = -314956976515672403LL;
signed char var_21 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
