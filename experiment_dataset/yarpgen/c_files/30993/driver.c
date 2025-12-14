#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2087742372U;
short var_3 = (short)25483;
int var_8 = 2142814622;
short var_12 = (short)-28186;
short var_15 = (short)19813;
int zero = 0;
unsigned long long int var_19 = 8991432683889785910ULL;
unsigned int var_20 = 1981230670U;
void init() {
}

void checksum() {
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
