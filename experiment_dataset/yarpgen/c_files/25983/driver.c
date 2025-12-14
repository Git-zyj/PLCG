#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 559977707;
unsigned char var_3 = (unsigned char)252;
unsigned short var_5 = (unsigned short)49252;
short var_7 = (short)22182;
long long int var_9 = 3312228565020310125LL;
int var_10 = 1962702327;
signed char var_11 = (signed char)2;
int zero = 0;
signed char var_13 = (signed char)-17;
_Bool var_14 = (_Bool)0;
int var_15 = -1496788322;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
