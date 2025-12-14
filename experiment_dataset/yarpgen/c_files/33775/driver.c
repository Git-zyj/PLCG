#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5334715699736995335LL;
unsigned long long int var_18 = 4650854056247496872ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-61;
signed char var_21 = (signed char)-42;
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
