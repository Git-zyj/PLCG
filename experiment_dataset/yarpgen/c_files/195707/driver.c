#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)242;
unsigned long long int var_2 = 6507177624999614529ULL;
int var_5 = -1308847905;
unsigned char var_6 = (unsigned char)173;
unsigned long long int var_7 = 7759487528388477061ULL;
unsigned char var_8 = (unsigned char)146;
long long int var_10 = 5106175831112844993LL;
signed char var_11 = (signed char)-54;
int zero = 0;
short var_12 = (short)14728;
_Bool var_13 = (_Bool)1;
int var_14 = -1277077;
unsigned long long int var_15 = 3879740187182471076ULL;
unsigned char var_16 = (unsigned char)193;
unsigned long long int var_17 = 3608236800576895683ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 12991472025861855308ULL;
unsigned short var_20 = (unsigned short)28535;
unsigned char var_21 = (unsigned char)32;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
