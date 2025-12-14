#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9042;
short var_1 = (short)13130;
long long int var_3 = -1199030602537065922LL;
_Bool var_4 = (_Bool)1;
int var_6 = 1543675723;
unsigned short var_8 = (unsigned short)3045;
long long int var_10 = 6961475456566407806LL;
unsigned long long int var_11 = 9496384449087476850ULL;
int var_14 = -1824276988;
unsigned short var_16 = (unsigned short)53674;
int var_17 = 25002308;
int zero = 0;
unsigned char var_18 = (unsigned char)60;
long long int var_19 = 6757956077189074092LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1233973231U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
