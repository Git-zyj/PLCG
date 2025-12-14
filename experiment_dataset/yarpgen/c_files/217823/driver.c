#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned char var_3 = (unsigned char)117;
unsigned long long int var_10 = 3301526845181194285ULL;
unsigned char var_11 = (unsigned char)193;
int zero = 0;
unsigned long long int var_15 = 12563671674802681733ULL;
unsigned char var_16 = (unsigned char)201;
unsigned long long int var_17 = 12425163628943701120ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
