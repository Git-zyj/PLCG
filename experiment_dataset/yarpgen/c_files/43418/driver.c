#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2041171116;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_10 = 67346816;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)85;
long long int var_13 = 8765179653396391819LL;
unsigned short var_14 = (unsigned short)62821;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
