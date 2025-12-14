#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16752845615734725122ULL;
_Bool var_2 = (_Bool)1;
short var_8 = (short)23960;
unsigned long long int var_9 = 10389948307759397425ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1082835771U;
long long int var_21 = -3503328540141879790LL;
int var_22 = 600750460;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
