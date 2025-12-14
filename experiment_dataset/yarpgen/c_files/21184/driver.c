#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
signed char var_1 = (signed char)11;
unsigned long long int var_2 = 15994577539622582623ULL;
int var_8 = -1724987406;
int zero = 0;
unsigned short var_13 = (unsigned short)33883;
unsigned short var_14 = (unsigned short)62677;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
