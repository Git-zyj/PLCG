#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50206;
unsigned char var_5 = (unsigned char)5;
signed char var_8 = (signed char)-73;
long long int var_9 = 3815117067056761491LL;
int zero = 0;
unsigned short var_10 = (unsigned short)8895;
_Bool var_11 = (_Bool)0;
short var_12 = (short)28214;
_Bool var_13 = (_Bool)1;
long long int var_14 = -8887806930836257103LL;
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
