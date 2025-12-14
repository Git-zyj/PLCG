#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)109;
int var_10 = 1582532016;
unsigned long long int var_12 = 6865926936225797304ULL;
int var_14 = -150772911;
unsigned long long int var_16 = 11980894093241029110ULL;
int var_17 = -1966243530;
int zero = 0;
long long int var_18 = 754195458260695308LL;
_Bool var_19 = (_Bool)1;
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
