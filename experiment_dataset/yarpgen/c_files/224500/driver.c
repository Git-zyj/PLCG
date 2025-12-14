#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6848047658254974929LL;
_Bool var_3 = (_Bool)0;
short var_6 = (short)9196;
unsigned long long int var_8 = 9010898594483725461ULL;
unsigned long long int var_12 = 6204033773611016947ULL;
long long int var_13 = 6301324518559286544LL;
long long int var_14 = -9106780568006616809LL;
int zero = 0;
unsigned long long int var_16 = 12478361016812789813ULL;
unsigned char var_17 = (unsigned char)159;
_Bool var_18 = (_Bool)0;
long long int var_19 = -6160019792456524487LL;
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
