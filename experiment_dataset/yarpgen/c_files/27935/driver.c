#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-83;
signed char var_4 = (signed char)-64;
long long int var_7 = -7308052557690565896LL;
long long int var_9 = -3182686704768002742LL;
int var_10 = 807170687;
int var_11 = -88944379;
int zero = 0;
unsigned long long int var_13 = 5387669471101304754ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 4567562429088870485LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
