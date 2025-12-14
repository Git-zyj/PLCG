#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1639982427371637650ULL;
unsigned long long int var_7 = 12210045582114895183ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8761687402914459398LL;
long long int var_12 = 7194218202379524249LL;
unsigned char var_13 = (unsigned char)225;
int zero = 0;
unsigned long long int var_15 = 3639138426289720299ULL;
unsigned long long int var_16 = 17143844916883414264ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
