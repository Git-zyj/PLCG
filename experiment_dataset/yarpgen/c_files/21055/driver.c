#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 13364743592294833352ULL;
signed char var_2 = (signed char)20;
int var_4 = -2025432208;
unsigned char var_5 = (unsigned char)247;
short var_9 = (short)-670;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 9994069213365654568ULL;
unsigned short var_12 = (unsigned short)53717;
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
