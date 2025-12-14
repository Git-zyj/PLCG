#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5701475044277014146LL;
unsigned short var_4 = (unsigned short)19815;
int zero = 0;
unsigned short var_11 = (unsigned short)45255;
unsigned short var_12 = (unsigned short)14513;
long long int var_13 = 7235625503334714818LL;
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
