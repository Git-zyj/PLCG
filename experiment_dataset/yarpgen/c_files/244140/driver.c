#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9982;
unsigned short var_3 = (unsigned short)21850;
unsigned long long int var_6 = 10828606987307999349ULL;
short var_8 = (short)22202;
unsigned int var_9 = 2628557999U;
unsigned short var_12 = (unsigned short)7836;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)52564;
int var_19 = -627719945;
int var_20 = 164624343;
signed char var_21 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
