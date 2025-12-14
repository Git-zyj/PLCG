#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6827521448864393728LL;
unsigned short var_1 = (unsigned short)18262;
unsigned char var_7 = (unsigned char)99;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_14 = 4343978566801482535LL;
unsigned long long int var_15 = 306400941321600097ULL;
int var_16 = -1236317733;
long long int var_17 = -9104200597117275294LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
