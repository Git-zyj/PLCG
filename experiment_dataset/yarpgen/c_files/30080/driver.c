#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 361545239U;
unsigned int var_4 = 51036774U;
unsigned long long int var_6 = 11462991048793625242ULL;
unsigned int var_12 = 3223910407U;
unsigned long long int var_13 = 15589479244772399072ULL;
unsigned long long int var_14 = 16196255034922622439ULL;
int zero = 0;
unsigned int var_16 = 61065157U;
unsigned int var_17 = 1759266715U;
void init() {
}

void checksum() {
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
