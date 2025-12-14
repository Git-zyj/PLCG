#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned char var_3 = (unsigned char)116;
long long int var_8 = 3516937070813723359LL;
unsigned int var_13 = 4042463855U;
short var_15 = (short)-32445;
unsigned char var_16 = (unsigned char)28;
unsigned short var_17 = (unsigned short)63854;
int zero = 0;
unsigned int var_18 = 4110568361U;
unsigned char var_19 = (unsigned char)88;
unsigned short var_20 = (unsigned short)44712;
unsigned char var_21 = (unsigned char)190;
unsigned char var_22 = (unsigned char)223;
int var_23 = 384482151;
unsigned char arr_0 [25] ;
long long int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -5073378833340319165LL;
}

void checksum() {
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
