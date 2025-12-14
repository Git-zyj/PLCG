#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
signed char var_1 = (signed char)88;
unsigned short var_5 = (unsigned short)29877;
signed char var_10 = (signed char)-51;
int var_11 = 166687496;
unsigned long long int var_12 = 14532743198951447790ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)51942;
long long int var_18 = 2666922633713042903LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-125;
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
