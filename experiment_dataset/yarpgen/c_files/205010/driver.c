#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)61;
long long int var_9 = -3077625539888775750LL;
unsigned long long int var_13 = 15054005506916167943ULL;
long long int var_14 = 6835361033993542349LL;
int zero = 0;
unsigned long long int var_15 = 12621942111886593550ULL;
long long int var_16 = 3011187559676516738LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
