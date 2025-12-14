#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3779981279748052499ULL;
long long int var_4 = -7729649421233814222LL;
_Bool var_7 = (_Bool)1;
int var_8 = -1323954515;
unsigned long long int var_10 = 12892800916457102233ULL;
unsigned char var_11 = (unsigned char)31;
_Bool var_12 = (_Bool)1;
short var_14 = (short)16818;
int zero = 0;
unsigned long long int var_19 = 216824262992413804ULL;
unsigned long long int var_20 = 5372115157703312673ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
