#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 3530952267595380750ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_19 = 1685563628304913133ULL;
int zero = 0;
unsigned long long int var_20 = 4303411903035691706ULL;
signed char var_21 = (signed char)-99;
void init() {
}

void checksum() {
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
