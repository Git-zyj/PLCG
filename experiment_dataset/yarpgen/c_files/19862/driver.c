#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1115401556825266624ULL;
unsigned long long int var_1 = 18237191792228066840ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)18472;
unsigned int var_6 = 2182095268U;
unsigned int var_8 = 1529712248U;
long long int var_9 = -1187776802214039883LL;
int zero = 0;
signed char var_10 = (signed char)112;
unsigned int var_11 = 691185976U;
unsigned short var_12 = (unsigned short)14251;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
