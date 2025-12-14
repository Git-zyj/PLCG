#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1885591912;
_Bool var_2 = (_Bool)1;
int var_4 = -607871557;
unsigned int var_6 = 2137970042U;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)46270;
unsigned short var_10 = (unsigned short)49375;
unsigned int var_11 = 2484942518U;
long long int var_13 = 3771310052892962921LL;
int var_14 = 238523582;
int zero = 0;
unsigned int var_15 = 4147157080U;
long long int var_16 = 537096734566609582LL;
short var_17 = (short)-29177;
unsigned char var_18 = (unsigned char)180;
unsigned short var_19 = (unsigned short)7294;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
