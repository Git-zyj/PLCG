#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2308818925U;
signed char var_4 = (signed char)-56;
unsigned long long int var_7 = 12964896299363131941ULL;
unsigned long long int var_10 = 16820736868304744376ULL;
int zero = 0;
int var_11 = 866676965;
short var_12 = (short)24749;
unsigned long long int var_13 = 2053599699438182780ULL;
unsigned short var_14 = (unsigned short)20487;
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
