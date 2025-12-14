#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6490804862389915242ULL;
unsigned long long int var_12 = 12520944144519742796ULL;
int zero = 0;
unsigned long long int var_13 = 993055508008495635ULL;
unsigned char var_14 = (unsigned char)216;
unsigned int var_15 = 3972413113U;
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
