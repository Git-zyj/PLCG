#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15312092776055126924ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_15 = 12061907064845906082ULL;
int zero = 0;
int var_19 = 644113301;
short var_20 = (short)30851;
int var_21 = -330609404;
short var_22 = (short)19374;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
