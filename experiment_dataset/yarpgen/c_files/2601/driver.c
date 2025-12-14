#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1747040332957335185ULL;
unsigned char var_2 = (unsigned char)254;
_Bool var_4 = (_Bool)0;
long long int var_5 = 165264233387728782LL;
unsigned long long int var_6 = 15107335784322884753ULL;
unsigned int var_8 = 1323966488U;
short var_9 = (short)32432;
int zero = 0;
int var_13 = 271469744;
unsigned long long int var_14 = 4247949687977530947ULL;
short var_15 = (short)-28607;
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
