#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16147619060797728776ULL;
unsigned long long int var_1 = 4255721255498792956ULL;
unsigned int var_3 = 2144407236U;
unsigned char var_4 = (unsigned char)236;
unsigned long long int var_13 = 9670242291340038655ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)95;
int var_19 = 1240320621;
int var_20 = 1168450291;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
