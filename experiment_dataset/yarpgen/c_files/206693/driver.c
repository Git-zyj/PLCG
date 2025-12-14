#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2821637175U;
unsigned long long int var_3 = 15654443756876786995ULL;
unsigned int var_8 = 3901066318U;
int zero = 0;
short var_17 = (short)31517;
unsigned int var_18 = 3811352659U;
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
