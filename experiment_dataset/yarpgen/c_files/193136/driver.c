#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18278019331787784627ULL;
unsigned long long int var_1 = 15740176355955589096ULL;
unsigned long long int var_8 = 6501778680459620087ULL;
unsigned long long int var_9 = 16591738984957632993ULL;
unsigned long long int var_10 = 3737434179902976374ULL;
int zero = 0;
unsigned long long int var_11 = 13887756256138493833ULL;
unsigned long long int var_12 = 7013872346608485320ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
