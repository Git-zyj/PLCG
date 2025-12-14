#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-27954;
short var_5 = (short)-22577;
int var_7 = 520347910;
unsigned long long int var_9 = 17270170636156388314ULL;
int zero = 0;
signed char var_11 = (signed char)-1;
signed char var_12 = (signed char)4;
void init() {
}

void checksum() {
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
