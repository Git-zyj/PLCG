#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24826;
_Bool var_2 = (_Bool)0;
short var_14 = (short)2702;
short var_19 = (short)-24347;
int zero = 0;
unsigned int var_20 = 2333033516U;
unsigned long long int var_21 = 600128177050002312ULL;
unsigned long long int var_22 = 14409640429663010763ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
