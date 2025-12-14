#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5940749898228013528ULL;
long long int var_3 = -1936522006696825948LL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 11963974587742733290ULL;
long long int var_17 = 7433499321949448285LL;
unsigned long long int var_18 = 2899124153399243902ULL;
long long int var_19 = -9021857573967570883LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
