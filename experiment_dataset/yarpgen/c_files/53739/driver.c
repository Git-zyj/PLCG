#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 131007834;
unsigned short var_16 = (unsigned short)24695;
int zero = 0;
unsigned long long int var_18 = 422179093936829833ULL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)9115;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
