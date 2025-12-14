#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5285458873017030445LL;
long long int var_3 = -408655189936377099LL;
unsigned short var_4 = (unsigned short)17598;
long long int var_8 = 3630825772901558896LL;
int zero = 0;
long long int var_10 = -1468118541575070540LL;
long long int var_11 = 7568011491428351883LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
