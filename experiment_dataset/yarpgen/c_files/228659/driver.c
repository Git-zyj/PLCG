#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)6643;
long long int var_9 = 3045141900076423843LL;
signed char var_12 = (signed char)10;
int zero = 0;
short var_17 = (short)17215;
unsigned short var_18 = (unsigned short)32358;
int var_19 = 598245683;
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
