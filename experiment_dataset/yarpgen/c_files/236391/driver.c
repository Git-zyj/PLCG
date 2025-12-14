#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2639898216858022040LL;
short var_7 = (short)31321;
signed char var_10 = (signed char)123;
int var_11 = -1840791819;
int zero = 0;
unsigned int var_13 = 2467909859U;
unsigned int var_14 = 535618335U;
unsigned int var_15 = 5297314U;
unsigned int var_16 = 2892046470U;
unsigned short var_17 = (unsigned short)14217;
unsigned long long int var_18 = 532035891800546027ULL;
_Bool var_19 = (_Bool)1;
int var_20 = -385257099;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
