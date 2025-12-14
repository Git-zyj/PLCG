#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 91322526;
unsigned int var_3 = 1845460725U;
unsigned short var_4 = (unsigned short)15051;
int var_5 = 188826903;
int var_6 = -818155261;
signed char var_7 = (signed char)107;
unsigned int var_10 = 3369515833U;
long long int var_11 = -3863356918454890241LL;
int var_13 = -728929340;
unsigned short var_14 = (unsigned short)48804;
signed char var_16 = (signed char)63;
unsigned long long int var_17 = 10736865948069009461ULL;
int var_18 = -145785861;
int zero = 0;
short var_20 = (short)-28346;
unsigned short var_21 = (unsigned short)28746;
unsigned short var_22 = (unsigned short)51293;
unsigned int var_23 = 3664007719U;
int var_24 = 864907952;
short var_25 = (short)8180;
long long int arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = -7679523989429883556LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
