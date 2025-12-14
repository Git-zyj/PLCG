#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
unsigned long long int var_5 = 12081245046045843224ULL;
unsigned long long int var_13 = 17414501083115238784ULL;
int zero = 0;
long long int var_17 = 1911516221499277309LL;
unsigned short var_18 = (unsigned short)61359;
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
