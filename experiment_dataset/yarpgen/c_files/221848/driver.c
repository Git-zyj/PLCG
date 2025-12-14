#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7774481394410903387ULL;
unsigned long long int var_2 = 10375084444872980283ULL;
unsigned long long int var_3 = 2651766736353367947ULL;
long long int var_6 = 1987406133024929249LL;
int zero = 0;
long long int var_12 = -5120488860476112768LL;
unsigned long long int var_13 = 14574991274510375505ULL;
long long int var_14 = 441874007576445959LL;
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
