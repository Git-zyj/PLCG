#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11508273130313024910ULL;
long long int var_11 = 6508170425729747111LL;
unsigned long long int var_14 = 4596343250844102972ULL;
int zero = 0;
long long int var_17 = -1766003271345676154LL;
long long int var_18 = 334590513127135422LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
