#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -432148152;
long long int var_3 = -8901343221261963486LL;
unsigned int var_5 = 1212692750U;
int var_9 = -289673347;
int zero = 0;
unsigned char var_11 = (unsigned char)174;
int var_12 = 933161359;
long long int var_13 = 6975385478594435077LL;
void init() {
}

void checksum() {
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
