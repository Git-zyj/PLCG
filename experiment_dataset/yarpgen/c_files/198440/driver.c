#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4273687968481358797LL;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-103;
int zero = 0;
signed char var_15 = (signed char)40;
signed char var_16 = (signed char)12;
long long int var_17 = 4420765915941521225LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
