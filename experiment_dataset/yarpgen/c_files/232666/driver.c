#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6500201245518283494LL;
unsigned short var_6 = (unsigned short)12411;
long long int var_8 = -4353426125984994903LL;
int zero = 0;
signed char var_10 = (signed char)11;
int var_11 = 110028789;
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
