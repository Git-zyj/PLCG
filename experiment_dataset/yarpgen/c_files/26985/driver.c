#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9442658560222806996ULL;
unsigned long long int var_11 = 10609717214833244058ULL;
unsigned long long int var_12 = 6145580957936536467ULL;
int zero = 0;
long long int var_14 = -4712892449827492943LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-65;
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
