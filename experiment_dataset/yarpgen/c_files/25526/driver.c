#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3569552812488377362LL;
long long int var_5 = 1590670131558175640LL;
unsigned int var_11 = 935931208U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 784086226U;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1597133471880601180LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
