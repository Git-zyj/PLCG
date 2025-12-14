#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15752539064896923619ULL;
long long int var_5 = 3060719385930363443LL;
int var_8 = -245349331;
int zero = 0;
short var_10 = (short)23944;
long long int var_11 = -7851681745924091573LL;
int var_12 = -2019388389;
unsigned char var_13 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
