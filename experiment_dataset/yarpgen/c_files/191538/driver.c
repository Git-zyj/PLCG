#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31265;
short var_4 = (short)-9404;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)1377;
unsigned short var_8 = (unsigned short)50015;
long long int var_10 = -3521578398797716244LL;
int var_12 = -596558537;
long long int var_16 = -2951230450894138430LL;
int zero = 0;
unsigned int var_17 = 829956884U;
unsigned short var_18 = (unsigned short)20899;
unsigned char var_19 = (unsigned char)155;
short var_20 = (short)-25315;
long long int var_21 = 7440780219181484717LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
