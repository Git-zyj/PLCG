#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)172;
unsigned char var_6 = (unsigned char)106;
unsigned short var_7 = (unsigned short)21853;
unsigned int var_8 = 3901282589U;
unsigned int var_11 = 1252222973U;
unsigned short var_16 = (unsigned short)63241;
long long int var_17 = 2800808881414461048LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)25523;
void init() {
}

void checksum() {
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
