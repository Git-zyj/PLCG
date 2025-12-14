#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2500817741U;
unsigned short var_2 = (unsigned short)42083;
unsigned short var_6 = (unsigned short)55374;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -6138491881272367574LL;
signed char var_11 = (signed char)15;
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
