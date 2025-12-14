#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53772;
unsigned int var_2 = 84303980U;
unsigned short var_6 = (unsigned short)24405;
long long int var_8 = -5238500681787900627LL;
long long int var_10 = 662281913654413897LL;
unsigned char var_12 = (unsigned char)108;
int var_13 = -1354382403;
unsigned char var_14 = (unsigned char)209;
short var_18 = (short)-17071;
int zero = 0;
signed char var_19 = (signed char)87;
short var_20 = (short)-26656;
void init() {
}

void checksum() {
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
