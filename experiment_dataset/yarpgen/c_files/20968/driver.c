#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_8 = 5173877927272770604ULL;
int var_9 = 1714530415;
unsigned long long int var_10 = 4646477516372721136ULL;
long long int var_11 = 3640653425082965087LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 15118430308085175922ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)141;
unsigned char var_18 = (unsigned char)216;
long long int var_19 = -7680428134689079448LL;
unsigned int var_20 = 3981061348U;
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
