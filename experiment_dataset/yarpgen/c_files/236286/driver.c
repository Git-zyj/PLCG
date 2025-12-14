#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1620884878617148339LL;
unsigned long long int var_4 = 13157329676928766771ULL;
unsigned long long int var_5 = 10655378138866894962ULL;
int var_6 = -214134542;
unsigned char var_8 = (unsigned char)167;
int zero = 0;
int var_17 = 726137705;
int var_18 = -1291030546;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
