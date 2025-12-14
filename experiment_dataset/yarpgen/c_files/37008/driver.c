#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
unsigned long long int var_2 = 15771551422093464948ULL;
int var_6 = -634863894;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 15506447689554868643ULL;
unsigned int var_20 = 549823298U;
long long int var_21 = -22677244646602376LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
