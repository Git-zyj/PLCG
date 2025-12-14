#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)78;
int var_8 = -1421611185;
unsigned char var_10 = (unsigned char)76;
int zero = 0;
unsigned long long int var_13 = 799174386252166587ULL;
int var_14 = -1820695774;
unsigned char var_15 = (unsigned char)133;
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
