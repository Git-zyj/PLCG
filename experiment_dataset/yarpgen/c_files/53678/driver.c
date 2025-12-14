#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 971492946;
unsigned long long int var_2 = 15923942063679195340ULL;
unsigned long long int var_8 = 3988126830358571785ULL;
int zero = 0;
int var_12 = -1810861803;
long long int var_13 = 3646704557607560831LL;
long long int var_14 = -2254609821851149388LL;
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
