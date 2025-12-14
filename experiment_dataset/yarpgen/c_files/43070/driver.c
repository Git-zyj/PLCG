#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned char var_4 = (unsigned char)18;
int var_5 = -624575703;
int var_7 = 259869376;
unsigned short var_8 = (unsigned short)19232;
_Bool var_9 = (_Bool)1;
int var_10 = -976602019;
long long int var_11 = -5788353278243946209LL;
signed char var_12 = (signed char)79;
int var_13 = -1775866805;
unsigned short var_14 = (unsigned short)54290;
short var_15 = (short)-30430;
int zero = 0;
signed char var_16 = (signed char)43;
_Bool var_17 = (_Bool)0;
long long int var_18 = 3173082970587702477LL;
unsigned short var_19 = (unsigned short)14066;
unsigned char var_20 = (unsigned char)151;
unsigned short var_21 = (unsigned short)20635;
signed char var_22 = (signed char)79;
int var_23 = -1341125004;
unsigned char var_24 = (unsigned char)13;
int var_25 = -1978949666;
int var_26 = -1074289908;
int var_27 = 1687788634;
long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1479887767271053943LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
