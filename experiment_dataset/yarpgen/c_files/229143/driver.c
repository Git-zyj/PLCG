#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned char var_2 = (unsigned char)47;
long long int var_8 = 3555479215101236444LL;
long long int var_9 = 1401458007263001296LL;
long long int var_11 = -5555833862647719333LL;
unsigned short var_13 = (unsigned short)45571;
short var_14 = (short)-28557;
signed char var_15 = (signed char)-68;
short var_17 = (short)-32508;
int zero = 0;
short var_18 = (short)-1708;
unsigned char var_19 = (unsigned char)109;
short var_20 = (short)-1455;
short var_21 = (short)5092;
short var_22 = (short)24952;
short var_23 = (short)29662;
long long int var_24 = -264476674755503727LL;
unsigned short var_25 = (unsigned short)48158;
short var_26 = (short)-29161;
unsigned short var_27 = (unsigned short)757;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)255;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
