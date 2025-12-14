#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6568159053391011697LL;
signed char var_4 = (signed char)-109;
int var_12 = -137423777;
int zero = 0;
signed char var_14 = (signed char)79;
unsigned short var_15 = (unsigned short)20092;
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
