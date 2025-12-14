#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8024492412171843120LL;
unsigned short var_2 = (unsigned short)35194;
unsigned char var_3 = (unsigned char)29;
short var_4 = (short)5745;
int var_5 = 54004021;
short var_6 = (short)23570;
int var_7 = 2089631089;
unsigned long long int var_8 = 2307577032727210614ULL;
short var_9 = (short)17030;
int zero = 0;
short var_11 = (short)22226;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)4782;
short var_15 = (short)28785;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
