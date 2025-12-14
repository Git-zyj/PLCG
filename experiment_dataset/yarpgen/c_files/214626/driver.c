#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3617110037216746466LL;
long long int var_2 = 6038556637605025869LL;
long long int var_6 = 839407978715630499LL;
unsigned char var_11 = (unsigned char)149;
int var_13 = 764946444;
int zero = 0;
unsigned long long int var_14 = 6123552328901714048ULL;
int var_15 = 108608617;
void init() {
}

void checksum() {
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
