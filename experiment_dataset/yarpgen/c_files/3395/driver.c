#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 11068077286140569154ULL;
long long int var_3 = 4791399174152833984LL;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)27696;
int zero = 0;
signed char var_11 = (signed char)-96;
unsigned long long int var_12 = 4727315008237895639ULL;
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
