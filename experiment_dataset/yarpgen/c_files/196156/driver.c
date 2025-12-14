#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31487;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)25;
unsigned short var_8 = (unsigned short)22905;
unsigned int var_10 = 293647519U;
_Bool var_11 = (_Bool)0;
int var_13 = -1546704810;
int zero = 0;
unsigned int var_14 = 3276843670U;
unsigned short var_15 = (unsigned short)60129;
unsigned char var_16 = (unsigned char)60;
long long int var_17 = -7638574068484786901LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
