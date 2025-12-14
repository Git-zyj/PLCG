#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -826968439;
unsigned long long int var_11 = 4963568821558056721ULL;
unsigned char var_12 = (unsigned char)89;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 7830638674400767174ULL;
unsigned int var_18 = 1437458823U;
short var_19 = (short)-12202;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
