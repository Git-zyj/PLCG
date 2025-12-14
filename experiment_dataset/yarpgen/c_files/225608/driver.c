#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3995396079U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3633002990601539325ULL;
unsigned int var_9 = 1573085159U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3970269640U;
unsigned int var_16 = 939969937U;
int zero = 0;
unsigned short var_17 = (unsigned short)60050;
long long int var_18 = -6810372000308894223LL;
unsigned long long int var_19 = 5803987654168598378ULL;
short var_20 = (short)-10960;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
