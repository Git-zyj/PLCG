#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15796888127010463092ULL;
long long int var_8 = -5154852286175339560LL;
int var_9 = 1566259782;
int zero = 0;
long long int var_11 = -1118975553940235552LL;
signed char var_12 = (signed char)-21;
unsigned int var_13 = 1293663983U;
unsigned char var_14 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
