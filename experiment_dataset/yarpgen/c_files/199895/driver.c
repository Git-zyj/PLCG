#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1157551432U;
unsigned int var_4 = 2971421379U;
unsigned long long int var_6 = 6862553136750980748ULL;
unsigned long long int var_8 = 892238258575045953ULL;
int zero = 0;
unsigned long long int var_17 = 5447591363627887996ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)32560;
void init() {
}

void checksum() {
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
