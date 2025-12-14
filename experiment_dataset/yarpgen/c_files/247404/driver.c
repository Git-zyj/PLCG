#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
long long int var_3 = -8457613363527811242LL;
unsigned short var_5 = (unsigned short)57604;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)96;
unsigned char var_8 = (unsigned char)216;
unsigned short var_9 = (unsigned short)26454;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)4020;
long long int var_12 = 5445695729180347540LL;
unsigned char var_13 = (unsigned char)199;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4681083035220205789LL;
int zero = 0;
long long int var_17 = -4876598679198424702LL;
signed char var_18 = (signed char)-91;
unsigned short var_19 = (unsigned short)46510;
short var_20 = (short)4755;
unsigned char var_21 = (unsigned char)21;
unsigned short var_22 = (unsigned short)26631;
_Bool var_23 = (_Bool)0;
_Bool arr_0 [21] ;
_Bool arr_2 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
