#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1876298349936359322LL;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 1428289409U;
int zero = 0;
unsigned long long int var_16 = 10627052936661477276ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)35528;
unsigned long long int var_19 = 11468292133675330218ULL;
unsigned short var_20 = (unsigned short)23549;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
