#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 269360148255472348LL;
signed char var_1 = (signed char)54;
unsigned long long int var_5 = 10233396613550283212ULL;
unsigned int var_10 = 4098694790U;
int zero = 0;
unsigned long long int var_15 = 10503165826237727380ULL;
long long int var_16 = 3989817384139222089LL;
long long int var_17 = -8544109995999203366LL;
void init() {
}

void checksum() {
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
