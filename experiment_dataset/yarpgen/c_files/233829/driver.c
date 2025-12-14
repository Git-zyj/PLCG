#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8295501877349578476ULL;
_Bool var_3 = (_Bool)0;
long long int var_8 = -564898194483149925LL;
long long int var_11 = 4423694832681072264LL;
int zero = 0;
unsigned int var_13 = 3349744263U;
unsigned long long int var_14 = 2786207603620219421ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
