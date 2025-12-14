#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 352626972U;
short var_5 = (short)25995;
unsigned char var_7 = (unsigned char)39;
short var_8 = (short)26010;
long long int var_9 = 4090652772027404999LL;
unsigned short var_10 = (unsigned short)1028;
short var_17 = (short)1446;
int zero = 0;
unsigned int var_20 = 708723337U;
unsigned int var_21 = 3090021129U;
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
