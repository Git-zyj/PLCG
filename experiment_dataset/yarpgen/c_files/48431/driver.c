#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 458325438;
int var_2 = 289392848;
long long int var_7 = -724028200780071097LL;
short var_9 = (short)4565;
int zero = 0;
unsigned int var_12 = 249774428U;
unsigned short var_13 = (unsigned short)28484;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
