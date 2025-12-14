#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
unsigned int var_2 = 557207711U;
unsigned long long int var_3 = 9023400098924194016ULL;
unsigned int var_5 = 1543579121U;
unsigned long long int var_11 = 7080550765567138221ULL;
unsigned short var_14 = (unsigned short)31046;
int zero = 0;
long long int var_16 = 3763842813390589093LL;
long long int var_17 = 6544227158419968185LL;
unsigned int var_18 = 3372660066U;
unsigned int var_19 = 3103953876U;
long long int var_20 = 1723367845765109650LL;
void init() {
}

void checksum() {
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
