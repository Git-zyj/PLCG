#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16902538622288872573ULL;
unsigned long long int var_1 = 2474625109316569968ULL;
int var_2 = 1318412827;
long long int var_3 = -3778789760300790106LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)127;
long long int var_14 = -2045557942542662606LL;
unsigned long long int var_16 = 4875571093223136763ULL;
int zero = 0;
unsigned long long int var_17 = 4760382430719589395ULL;
unsigned long long int var_18 = 9917396181260189869ULL;
signed char var_19 = (signed char)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
