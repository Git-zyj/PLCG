#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 9869796003116864362ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = -1362112668;
long long int var_11 = 5856519373575754565LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
