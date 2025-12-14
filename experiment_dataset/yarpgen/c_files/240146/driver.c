#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8002886185027984132ULL;
long long int var_5 = 8245011151194831118LL;
long long int var_10 = 704134833208215788LL;
int zero = 0;
int var_13 = 608909401;
unsigned short var_14 = (unsigned short)15702;
unsigned long long int var_15 = 4058534701203324736ULL;
short var_16 = (short)29143;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
