#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
unsigned short var_1 = (unsigned short)58599;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-16;
unsigned long long int var_6 = 6352096802431739375ULL;
signed char var_7 = (signed char)8;
unsigned int var_8 = 3093300359U;
short var_9 = (short)-30095;
unsigned short var_10 = (unsigned short)24796;
long long int var_11 = -4048068370611149173LL;
unsigned char var_12 = (unsigned char)6;
unsigned short var_13 = (unsigned short)20679;
long long int var_14 = -7140109601419832823LL;
long long int var_15 = -6393639234353137383LL;
unsigned short var_16 = (unsigned short)1493;
unsigned short var_17 = (unsigned short)35194;
unsigned short var_19 = (unsigned short)19268;
int zero = 0;
long long int var_20 = 5786354203553736225LL;
unsigned short var_21 = (unsigned short)56474;
unsigned int var_22 = 126646176U;
long long int var_23 = -4537500970176778738LL;
unsigned long long int var_24 = 1993877905926633035ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
