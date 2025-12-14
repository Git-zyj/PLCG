#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14244189185646210412ULL;
long long int var_7 = 8012363623520270384LL;
int zero = 0;
unsigned int var_14 = 3711762608U;
long long int var_15 = -8061553990588184221LL;
unsigned long long int var_16 = 4219739979444221978ULL;
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
