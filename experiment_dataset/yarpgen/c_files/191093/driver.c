#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned long long int var_1 = 7566359213642439778ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 2895617410363090476LL;
signed char var_7 = (signed char)-2;
signed char var_8 = (signed char)66;
int var_9 = 1604017843;
unsigned short var_10 = (unsigned short)774;
int zero = 0;
unsigned short var_12 = (unsigned short)2583;
long long int var_13 = -8705599637083112115LL;
signed char var_14 = (signed char)115;
unsigned char var_15 = (unsigned char)99;
long long int var_16 = 532831929246859326LL;
int var_17 = 1167598207;
signed char arr_3 [21] ;
long long int arr_4 [21] [21] ;
signed char arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 301751678019918967LL : -2216262242466138568LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)4 : (signed char)113;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
