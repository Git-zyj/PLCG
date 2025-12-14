#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 781941397U;
short var_1 = (short)29849;
unsigned char var_2 = (unsigned char)16;
unsigned char var_3 = (unsigned char)244;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)58;
long long int var_10 = -7933693435832031029LL;
int zero = 0;
unsigned short var_11 = (unsigned short)19563;
signed char var_12 = (signed char)-55;
short var_13 = (short)23600;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
