#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5663415923625341000LL;
long long int var_3 = -1583200157588814484LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)38248;
short var_8 = (short)9;
long long int var_10 = -4348732729327169549LL;
unsigned char var_11 = (unsigned char)138;
int zero = 0;
long long int var_12 = -7450921807948017477LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3246861157U;
void init() {
}

void checksum() {
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
