#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2062457655;
long long int var_1 = 4366355820408201481LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 1345679375059712354ULL;
signed char var_10 = (signed char)-98;
int zero = 0;
unsigned long long int var_11 = 8909871125043513066ULL;
signed char var_12 = (signed char)124;
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
