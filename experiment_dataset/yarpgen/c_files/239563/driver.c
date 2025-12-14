#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8928;
unsigned long long int var_1 = 3495799785298124515ULL;
signed char var_3 = (signed char)127;
unsigned short var_4 = (unsigned short)37218;
long long int var_5 = 4074978718957631893LL;
unsigned char var_6 = (unsigned char)193;
int var_7 = 149551185;
signed char var_9 = (signed char)101;
unsigned char var_11 = (unsigned char)120;
int var_12 = -939730556;
unsigned char var_13 = (unsigned char)19;
unsigned char var_14 = (unsigned char)88;
int var_15 = 1080321947;
int zero = 0;
signed char var_16 = (signed char)-2;
int var_17 = -1398937560;
unsigned short var_18 = (unsigned short)62660;
long long int var_19 = 4282928671828535166LL;
signed char var_20 = (signed char)-65;
_Bool var_21 = (_Bool)1;
int var_22 = 1723276374;
short var_23 = (short)-5870;
unsigned long long int var_24 = 16954894313566885225ULL;
signed char var_25 = (signed char)24;
long long int var_26 = -4554608417338762369LL;
short var_27 = (short)25048;
int var_28 = 1193867741;
unsigned long long int var_29 = 16106186586483072795ULL;
unsigned char var_30 = (unsigned char)208;
unsigned char var_31 = (unsigned char)4;
unsigned char var_32 = (unsigned char)14;
unsigned short arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)527 : (unsigned short)13746;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
