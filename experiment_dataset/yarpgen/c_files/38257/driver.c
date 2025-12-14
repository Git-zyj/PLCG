#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2204;
long long int var_8 = -1290899993910896854LL;
_Bool var_10 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 7539845307706356998ULL;
unsigned int var_21 = 3328694542U;
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
