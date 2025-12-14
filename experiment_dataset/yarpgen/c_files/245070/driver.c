#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-115;
unsigned char var_7 = (unsigned char)91;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)20;
long long int var_12 = 5620171812250600054LL;
unsigned short var_17 = (unsigned short)9908;
int zero = 0;
unsigned short var_18 = (unsigned short)8007;
unsigned short var_19 = (unsigned short)34920;
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
