#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62340;
short var_1 = (short)26755;
int var_3 = 406949057;
unsigned short var_4 = (unsigned short)26342;
long long int var_8 = 5880893737277162873LL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1151708897U;
int zero = 0;
unsigned short var_13 = (unsigned short)229;
unsigned char var_14 = (unsigned char)161;
void init() {
}

void checksum() {
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
