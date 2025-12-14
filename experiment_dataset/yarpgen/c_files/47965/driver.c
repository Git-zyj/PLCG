#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
unsigned short var_1 = (unsigned short)52472;
short var_2 = (short)23754;
unsigned short var_3 = (unsigned short)4930;
unsigned long long int var_4 = 16108008717784651470ULL;
unsigned long long int var_5 = 8098436981167759459ULL;
unsigned short var_6 = (unsigned short)4286;
int var_7 = 1525780847;
signed char var_8 = (signed char)41;
int var_9 = 1262996876;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-62;
short var_12 = (short)9794;
_Bool var_13 = (_Bool)0;
long long int var_14 = 1341455624699456349LL;
short arr_3 [22] [22] ;
signed char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-9762 : (short)16949;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)-87;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
