#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
int var_6 = 590163710;
unsigned short var_7 = (unsigned short)8066;
unsigned short var_10 = (unsigned short)29119;
long long int var_13 = -138482534898736947LL;
unsigned short var_14 = (unsigned short)63832;
int zero = 0;
unsigned short var_15 = (unsigned short)44816;
unsigned char var_16 = (unsigned char)229;
_Bool var_17 = (_Bool)0;
long long int var_18 = -3128991421127957296LL;
int var_19 = -1906539041;
unsigned long long int var_20 = 13744963912362445801ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
