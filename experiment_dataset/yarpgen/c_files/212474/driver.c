#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3001591531U;
long long int var_4 = -8894424841372744334LL;
unsigned int var_8 = 3110149098U;
int var_9 = -1514421006;
unsigned long long int var_10 = 6940449121751266921ULL;
int var_11 = -1893007515;
int zero = 0;
long long int var_13 = 3450544737349961369LL;
unsigned long long int var_14 = 3625053739852134526ULL;
void init() {
}

void checksum() {
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
