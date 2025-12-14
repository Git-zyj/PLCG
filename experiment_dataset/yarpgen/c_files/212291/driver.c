#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1786206615;
int var_1 = -1901297618;
long long int var_2 = -7878848763723005817LL;
unsigned short var_5 = (unsigned short)48223;
_Bool var_6 = (_Bool)0;
long long int var_8 = 5775962543727439504LL;
unsigned short var_11 = (unsigned short)3623;
int zero = 0;
long long int var_12 = 7703353731159510926LL;
int var_13 = 729784728;
int var_14 = 92595385;
unsigned int var_15 = 1072720386U;
long long int var_16 = 1570310198904702516LL;
int var_17 = -803466915;
unsigned short var_18 = (unsigned short)20766;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1174716505U;
unsigned short arr_1 [21] ;
unsigned short arr_5 [21] ;
unsigned int arr_6 [21] ;
unsigned char arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)44366;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50216 : (unsigned short)6129;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 337998952U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)97;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
