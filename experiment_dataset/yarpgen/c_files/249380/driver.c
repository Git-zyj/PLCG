#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16294282582163898105ULL;
unsigned char var_1 = (unsigned char)233;
short var_2 = (short)27176;
signed char var_4 = (signed char)62;
short var_7 = (short)-11557;
unsigned short var_8 = (unsigned short)23750;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)146;
signed char var_14 = (signed char)30;
short var_15 = (short)24500;
_Bool var_17 = (_Bool)0;
int var_18 = -1355993021;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 2967211515698430005LL;
int var_22 = -1287529586;
unsigned long long int var_23 = 15411803702037994498ULL;
int var_24 = -240438105;
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
