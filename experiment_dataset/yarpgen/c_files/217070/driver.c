#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1436476088;
unsigned short var_5 = (unsigned short)7930;
long long int var_7 = -9038158704718872039LL;
short var_12 = (short)-32207;
long long int var_13 = 3035193260183152889LL;
unsigned long long int var_18 = 9069626799022129609ULL;
long long int var_19 = 4152218230589362226LL;
int zero = 0;
unsigned char var_20 = (unsigned char)21;
long long int var_21 = -3768275568966043496LL;
long long int var_22 = 4348410590201796924LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
