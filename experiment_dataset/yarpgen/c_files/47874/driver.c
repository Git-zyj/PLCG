#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3774616579U;
unsigned long long int var_3 = 143744167475914417ULL;
unsigned char var_7 = (unsigned char)47;
unsigned char var_9 = (unsigned char)162;
int zero = 0;
unsigned char var_13 = (unsigned char)62;
signed char var_14 = (signed char)110;
signed char var_15 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
