#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5433735908298928267ULL;
unsigned char var_2 = (unsigned char)114;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)22;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-565;
signed char var_9 = (signed char)10;
int zero = 0;
unsigned char var_10 = (unsigned char)138;
unsigned long long int var_11 = 9827491191020742449ULL;
int var_12 = -1041561905;
short var_13 = (short)22294;
_Bool var_14 = (_Bool)1;
int var_15 = -872126010;
_Bool var_16 = (_Bool)1;
long long int var_17 = 8756278507278081749LL;
int var_18 = 1352136476;
int arr_0 [25] ;
unsigned int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 723764279;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 198095703U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
