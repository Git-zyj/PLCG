#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)22121;
long long int var_6 = 885555562135683403LL;
unsigned short var_9 = (unsigned short)48647;
int zero = 0;
unsigned long long int var_10 = 6220994566604635266ULL;
short var_11 = (short)19122;
unsigned long long int var_12 = 15095959092000484518ULL;
int var_13 = -1830906766;
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
