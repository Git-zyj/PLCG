#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1546827313;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)39648;
unsigned char var_8 = (unsigned char)106;
unsigned short var_9 = (unsigned short)36123;
int var_11 = -1944215780;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned int var_18 = 3613240234U;
int zero = 0;
unsigned char var_20 = (unsigned char)68;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)197;
int var_23 = -550655479;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
