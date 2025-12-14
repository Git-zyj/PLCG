#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2094385328;
unsigned char var_1 = (unsigned char)4;
int var_2 = -988710430;
unsigned char var_3 = (unsigned char)22;
unsigned short var_4 = (unsigned short)18917;
unsigned char var_5 = (unsigned char)203;
_Bool var_6 = (_Bool)0;
long long int var_7 = -1228466330949971190LL;
long long int var_9 = -9198475933516974320LL;
unsigned char var_11 = (unsigned char)209;
long long int var_12 = 5884844463128469984LL;
unsigned char var_13 = (unsigned char)214;
int zero = 0;
unsigned char var_15 = (unsigned char)77;
long long int var_16 = 5687626867640509164LL;
unsigned char var_17 = (unsigned char)190;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)19;
unsigned char var_21 = (unsigned char)149;
unsigned char var_22 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
