#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_13 = (unsigned char)201;
int zero = 0;
unsigned long long int var_17 = 11130788785943018878ULL;
int var_18 = 1253023377;
unsigned long long int var_19 = 4968609623845788800ULL;
signed char var_20 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
