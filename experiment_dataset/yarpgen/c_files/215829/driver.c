#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13723;
signed char var_3 = (signed char)91;
signed char var_4 = (signed char)122;
unsigned long long int var_10 = 8052454621214566284ULL;
int zero = 0;
signed char var_11 = (signed char)101;
unsigned long long int var_12 = 921313954004482690ULL;
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
