#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3250727835U;
unsigned short var_2 = (unsigned short)50520;
unsigned int var_4 = 2214514555U;
unsigned int var_10 = 139357820U;
int zero = 0;
unsigned long long int var_11 = 1959171515934328484ULL;
unsigned int var_12 = 2838154012U;
unsigned int var_13 = 2538724299U;
void init() {
}

void checksum() {
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
