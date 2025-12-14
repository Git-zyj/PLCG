#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4235329456229203472ULL;
unsigned long long int var_7 = 8416901001502143061ULL;
unsigned long long int var_8 = 9499358741506023427ULL;
int zero = 0;
unsigned long long int var_14 = 16607891128826730364ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 1519871176124283754LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
