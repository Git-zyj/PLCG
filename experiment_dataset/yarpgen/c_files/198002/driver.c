#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3582282308261943806LL;
_Bool var_4 = (_Bool)1;
int var_5 = -733766727;
int var_11 = -2066751942;
long long int var_13 = -51103573250777647LL;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
int var_18 = 1779657436;
int var_19 = 300303014;
int var_20 = 1518406088;
void init() {
}

void checksum() {
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
