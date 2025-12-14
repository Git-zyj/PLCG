#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2676130800U;
unsigned long long int var_4 = 5374067638980039405ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 16598593908831139117ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)30807;
long long int var_15 = -8141269464927592031LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
