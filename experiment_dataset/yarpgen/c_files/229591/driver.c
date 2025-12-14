#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38826;
unsigned short var_3 = (unsigned short)4194;
int var_10 = -1169779609;
int zero = 0;
unsigned short var_13 = (unsigned short)65495;
long long int var_14 = 1443043886454053547LL;
long long int var_15 = -5157150204409718772LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
