#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4711837930485763359LL;
unsigned long long int var_6 = 18404142944810709983ULL;
int var_9 = -1777775983;
long long int var_12 = -339147907311791520LL;
unsigned int var_15 = 3445517776U;
int zero = 0;
long long int var_16 = 6295103751299927963LL;
unsigned char var_17 = (unsigned char)73;
unsigned int var_18 = 3726047733U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
