#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3087810038678627369ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1441796786216261303LL;
int zero = 0;
int var_11 = -864829729;
unsigned long long int var_12 = 1123656312541558386ULL;
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
