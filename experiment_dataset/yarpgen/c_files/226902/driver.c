#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)118;
unsigned long long int var_8 = 4394441352728464265ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 859541132651101766LL;
int var_11 = -1775375892;
unsigned short var_12 = (unsigned short)16227;
int var_13 = 939838628;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
