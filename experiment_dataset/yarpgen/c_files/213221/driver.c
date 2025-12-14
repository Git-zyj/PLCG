#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23071;
unsigned long long int var_1 = 8907797431206063892ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 2709590828260789495ULL;
signed char var_6 = (signed char)-64;
int var_7 = -1754466386;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11548520837686741794ULL;
long long int var_13 = -8989327496104468583LL;
int zero = 0;
int var_20 = 1591805709;
unsigned short var_21 = (unsigned short)40090;
unsigned short var_22 = (unsigned short)9426;
_Bool var_23 = (_Bool)1;
int var_24 = -1178127054;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-56 : (signed char)-72;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
