#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_8 = -3316337218917973720LL;
unsigned long long int var_9 = 14297333090721449468ULL;
unsigned long long int var_14 = 18004221633041309959ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_20 = 2138193646734422294LL;
long long int var_21 = 7268879317013269423LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 13866048147257536299ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
