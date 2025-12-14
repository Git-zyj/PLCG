#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 14122897386256136884ULL;
unsigned long long int var_11 = 12653415982212451865ULL;
int var_14 = -685773517;
int zero = 0;
long long int var_17 = 348176340273247878LL;
short var_18 = (short)-1732;
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
