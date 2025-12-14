#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5898864504551145029ULL;
unsigned int var_2 = 3404637498U;
unsigned short var_3 = (unsigned short)14567;
unsigned short var_4 = (unsigned short)21332;
unsigned long long int var_7 = 3291335042295517203ULL;
int var_8 = 1348848623;
unsigned long long int var_9 = 16194812642181323319ULL;
int zero = 0;
long long int var_11 = 2508981640474414488LL;
unsigned int var_12 = 4195516943U;
int var_13 = 1502836928;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
