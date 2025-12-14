#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2996324243U;
short var_6 = (short)4254;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 3966884087826715859ULL;
unsigned short var_20 = (unsigned short)12767;
void init() {
}

void checksum() {
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
