#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 266392226;
long long int var_2 = 5902722599590106113LL;
long long int var_11 = 7669124924852550384LL;
int zero = 0;
signed char var_14 = (signed char)82;
int var_15 = -1637265585;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
