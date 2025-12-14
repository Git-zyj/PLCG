#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1690411904;
unsigned long long int var_3 = 414234644193437478ULL;
long long int var_9 = 8230284639684015783LL;
unsigned char var_13 = (unsigned char)158;
int zero = 0;
unsigned char var_14 = (unsigned char)52;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)18091;
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
