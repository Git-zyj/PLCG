#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 801293032343850568LL;
unsigned long long int var_9 = 16599210028542917034ULL;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-24648;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 6254254649776395898LL;
void init() {
}

void checksum() {
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
