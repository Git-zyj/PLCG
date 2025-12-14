#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)37;
unsigned char var_5 = (unsigned char)11;
int var_7 = -419334257;
unsigned long long int var_13 = 1506653204136128554ULL;
int zero = 0;
unsigned long long int var_14 = 13386592371644093991ULL;
unsigned char var_15 = (unsigned char)44;
unsigned char var_16 = (unsigned char)181;
void init() {
}

void checksum() {
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
