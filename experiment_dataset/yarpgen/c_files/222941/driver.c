#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
unsigned int var_2 = 1464299228U;
unsigned long long int var_3 = 4927411540665063055ULL;
unsigned long long int var_4 = 6088268551208400488ULL;
long long int var_5 = 6059871571174494801LL;
unsigned char var_6 = (unsigned char)242;
unsigned short var_7 = (unsigned short)30843;
unsigned short var_8 = (unsigned short)49766;
int var_9 = 636409885;
int var_11 = -1093334540;
unsigned int var_12 = 895100180U;
int zero = 0;
short var_13 = (short)10177;
signed char var_14 = (signed char)-85;
unsigned char var_15 = (unsigned char)210;
unsigned char var_16 = (unsigned char)92;
signed char var_17 = (signed char)78;
unsigned short var_18 = (unsigned short)47488;
int var_19 = -1161868467;
unsigned char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)203 : (unsigned char)229;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
