#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2779828194229176509ULL;
short var_1 = (short)6603;
short var_5 = (short)-28790;
long long int var_7 = 8852566117233699401LL;
long long int var_8 = 8651025977393447166LL;
long long int var_11 = 647778466699347224LL;
long long int var_12 = 699825010914701836LL;
unsigned long long int var_13 = 5010198979424212302ULL;
int var_14 = -1443504330;
unsigned short var_19 = (unsigned short)61217;
int zero = 0;
unsigned char var_20 = (unsigned char)189;
long long int var_21 = -5895346297232551515LL;
unsigned short var_22 = (unsigned short)949;
unsigned char var_23 = (unsigned char)182;
short var_24 = (short)8608;
unsigned int var_25 = 3839710013U;
unsigned short var_26 = (unsigned short)15418;
short var_27 = (short)32344;
unsigned short var_28 = (unsigned short)9312;
signed char var_29 = (signed char)50;
unsigned char arr_2 [21] [21] ;
signed char arr_3 [21] [21] ;
signed char arr_7 [23] ;
long long int arr_5 [21] ;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3289172030502802828LL : -3910766201915638729LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)78 : (signed char)91;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
