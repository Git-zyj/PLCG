#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -302885487247335881LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_13 = 12869200416398211805ULL;
int zero = 0;
long long int var_15 = -5636945261931889606LL;
unsigned short var_16 = (unsigned short)46883;
long long int var_17 = -2233275841526204494LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
