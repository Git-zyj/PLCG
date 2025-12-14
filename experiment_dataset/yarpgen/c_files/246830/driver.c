#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)167;
unsigned short var_10 = (unsigned short)47937;
unsigned short var_13 = (unsigned short)23221;
long long int var_18 = 1256090180058672164LL;
int zero = 0;
unsigned long long int var_20 = 3220431624361204095ULL;
unsigned short var_21 = (unsigned short)20048;
int var_22 = -413317293;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
