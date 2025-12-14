#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11715399636288304023ULL;
unsigned short var_7 = (unsigned short)33361;
long long int var_11 = 4324150084555967526LL;
int var_13 = 385796497;
int zero = 0;
unsigned int var_14 = 4225280006U;
unsigned int var_15 = 698573412U;
signed char var_16 = (signed char)12;
unsigned long long int var_17 = 5788301794644260287ULL;
int var_18 = 1369039294;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
