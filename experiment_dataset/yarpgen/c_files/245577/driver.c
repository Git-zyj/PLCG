#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7983166979036002842ULL;
unsigned char var_2 = (unsigned char)49;
long long int var_4 = -6292081558931911879LL;
unsigned char var_6 = (unsigned char)29;
long long int var_9 = -2913378299511809550LL;
unsigned long long int var_12 = 17951505398457064063ULL;
unsigned short var_13 = (unsigned short)9014;
int zero = 0;
unsigned char var_16 = (unsigned char)192;
long long int var_17 = 3734767533655929615LL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
