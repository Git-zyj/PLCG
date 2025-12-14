#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15583393547778792859ULL;
unsigned int var_2 = 3317341532U;
unsigned long long int var_3 = 16472761783292054286ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3409049427U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3540003458U;
long long int var_22 = 2105624171718726947LL;
unsigned long long int var_23 = 2130378451627585424ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
