#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)62335;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)175;
int zero = 0;
unsigned char var_14 = (unsigned char)136;
long long int var_15 = -4416713330554377861LL;
long long int var_16 = 2889559116004280376LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
