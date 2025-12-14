#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63666;
short var_4 = (short)31849;
unsigned char var_6 = (unsigned char)52;
short var_7 = (short)11029;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 15060057300800009952ULL;
short var_13 = (short)458;
int zero = 0;
long long int var_19 = -5663483750149241446LL;
unsigned long long int var_20 = 7588923775582041948ULL;
signed char var_21 = (signed char)-102;
signed char var_22 = (signed char)-56;
unsigned short var_23 = (unsigned short)44416;
unsigned long long int var_24 = 5281131316465792660ULL;
short arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
signed char arr_3 [18] ;
unsigned short arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)5519;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)15919;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)27022;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
