#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -394338970;
long long int var_2 = 3945467191340180606LL;
short var_6 = (short)-874;
int zero = 0;
long long int var_18 = -7112641121679364917LL;
unsigned int var_19 = 1837363928U;
void init() {
}

void checksum() {
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
