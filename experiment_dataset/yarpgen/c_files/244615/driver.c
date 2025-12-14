#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8936781566983089053LL;
unsigned long long int var_4 = 8498636571734511708ULL;
unsigned char var_6 = (unsigned char)136;
unsigned short var_7 = (unsigned short)8626;
int zero = 0;
unsigned long long int var_10 = 4857085518933219021ULL;
unsigned short var_11 = (unsigned short)39923;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
