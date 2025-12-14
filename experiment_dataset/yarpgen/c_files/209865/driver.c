#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4555932164426259867LL;
int var_1 = 271485797;
long long int var_2 = -471027305250481062LL;
long long int var_5 = 5003774752126771326LL;
unsigned long long int var_6 = 11766221356883848083ULL;
unsigned short var_7 = (unsigned short)10864;
unsigned char var_8 = (unsigned char)16;
short var_9 = (short)-20059;
int zero = 0;
unsigned short var_13 = (unsigned short)32878;
unsigned short var_14 = (unsigned short)17868;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)44210;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
