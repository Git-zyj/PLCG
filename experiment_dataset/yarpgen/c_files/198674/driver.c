#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
_Bool var_3 = (_Bool)1;
long long int var_4 = 9061744543952885849LL;
long long int var_8 = 6842547035290672116LL;
unsigned long long int var_9 = 7462754012476758289ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4506686059804635650ULL;
void init() {
}

void checksum() {
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
