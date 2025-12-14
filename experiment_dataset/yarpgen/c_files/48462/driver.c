#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6350422284789075040LL;
unsigned short var_5 = (unsigned short)58390;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_19 = 6939751354840648506LL;
unsigned short var_20 = (unsigned short)3259;
int var_21 = -1687759525;
unsigned long long int var_22 = 1736201202532563698ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
