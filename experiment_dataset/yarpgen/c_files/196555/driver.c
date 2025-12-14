#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1666020507;
unsigned int var_4 = 585477994U;
int var_5 = -1220078659;
long long int var_7 = 8227332857747762892LL;
unsigned int var_8 = 2897365277U;
unsigned char var_9 = (unsigned char)182;
int var_11 = -1149366392;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 1702579727;
int var_14 = 1937923001;
unsigned long long int var_15 = 6201846977978363347ULL;
_Bool var_16 = (_Bool)1;
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
