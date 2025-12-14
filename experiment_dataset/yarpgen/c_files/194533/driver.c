#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3609;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 5287376111155967050ULL;
short var_13 = (short)28899;
long long int var_18 = -9067081391050196208LL;
int zero = 0;
unsigned short var_20 = (unsigned short)14489;
short var_21 = (short)12107;
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
