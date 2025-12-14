#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8706288408172736578LL;
long long int var_3 = 3737517160290959740LL;
int var_7 = 346728668;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6630732369184914223LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
