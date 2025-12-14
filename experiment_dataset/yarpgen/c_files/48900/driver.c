#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9958;
long long int var_4 = 9073133733087230533LL;
signed char var_7 = (signed char)38;
int var_11 = -395107586;
int zero = 0;
long long int var_12 = 382431886441889571LL;
unsigned int var_13 = 2325601380U;
long long int var_14 = -6798957598589102055LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
