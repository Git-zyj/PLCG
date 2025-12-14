#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)206;
_Bool var_3 = (_Bool)1;
int var_5 = 1125402084;
unsigned short var_8 = (unsigned short)48465;
long long int var_9 = 8022444031645814124LL;
unsigned long long int var_10 = 8572875710030927362ULL;
unsigned int var_11 = 3288710794U;
unsigned long long int var_13 = 16896883067764047184ULL;
int var_14 = 1290546315;
int zero = 0;
unsigned int var_15 = 755698074U;
long long int var_16 = 5900770116879813069LL;
unsigned short var_17 = (unsigned short)44302;
long long int var_18 = 61525203789971619LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
