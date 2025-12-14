#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
_Bool var_2 = (_Bool)1;
long long int var_6 = 637663827376467665LL;
unsigned short var_9 = (unsigned short)42337;
long long int var_15 = 594204064129073503LL;
int zero = 0;
unsigned long long int var_16 = 1682704962518737369ULL;
unsigned long long int var_17 = 15822872282346306883ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
