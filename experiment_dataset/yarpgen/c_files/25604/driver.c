#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
int var_3 = -852265213;
unsigned int var_6 = 2631588299U;
int zero = 0;
long long int var_11 = -3409291426144015848LL;
_Bool var_12 = (_Bool)0;
int var_13 = -1880353731;
unsigned long long int var_14 = 5078504627797046017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
