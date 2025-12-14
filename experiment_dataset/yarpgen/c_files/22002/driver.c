#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1845256383147264862LL;
long long int var_7 = 1677677497337224852LL;
int zero = 0;
long long int var_13 = 4440496987695631227LL;
unsigned int var_14 = 3089091394U;
unsigned int var_15 = 4290781552U;
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
