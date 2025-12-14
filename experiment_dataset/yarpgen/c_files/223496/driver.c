#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57603;
unsigned long long int var_6 = 8324422454207477131ULL;
long long int var_7 = 5079270588954043717LL;
int zero = 0;
unsigned long long int var_12 = 1674143565621782642ULL;
unsigned long long int var_13 = 14769640768580565959ULL;
unsigned long long int var_14 = 12220548632641927017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
