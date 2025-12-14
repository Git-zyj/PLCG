#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1501109823U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 47128302U;
long long int var_9 = 5017038149398660390LL;
int zero = 0;
signed char var_16 = (signed char)-72;
signed char var_17 = (signed char)-123;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
