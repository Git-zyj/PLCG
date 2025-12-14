#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15282395423699173572ULL;
unsigned long long int var_5 = 1706193512227025505ULL;
unsigned long long int var_8 = 6051488617080401055ULL;
unsigned long long int var_9 = 18360888290916498844ULL;
unsigned long long int var_11 = 3693383052074091625ULL;
int zero = 0;
unsigned long long int var_13 = 3402590071099157157ULL;
unsigned long long int var_14 = 4108300046415246304ULL;
unsigned long long int var_15 = 1196250824129497110ULL;
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
