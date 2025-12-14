#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8487967953929683668ULL;
unsigned char var_5 = (unsigned char)161;
unsigned int var_14 = 3156671875U;
int zero = 0;
long long int var_17 = 6799699109436168544LL;
long long int var_18 = -5802399318779499819LL;
unsigned int var_19 = 977147580U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
