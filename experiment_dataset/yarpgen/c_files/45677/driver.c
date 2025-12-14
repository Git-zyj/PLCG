#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 97327770;
unsigned int var_3 = 1000338273U;
_Bool var_4 = (_Bool)0;
int var_5 = -1758839107;
long long int var_7 = 8299631537940373653LL;
short var_10 = (short)-28887;
long long int var_11 = 7617136031295482326LL;
unsigned short var_12 = (unsigned short)52583;
int zero = 0;
int var_14 = 1516363204;
unsigned long long int var_15 = 17370282323383837139ULL;
unsigned char var_16 = (unsigned char)161;
short var_17 = (short)26703;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 100358706433509579ULL;
signed char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)22;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
