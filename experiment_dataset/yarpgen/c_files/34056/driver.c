#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14066449203874887828ULL;
long long int var_2 = -6099283415664730849LL;
unsigned char var_7 = (unsigned char)138;
long long int var_8 = 5417759634069367879LL;
unsigned short var_10 = (unsigned short)64016;
signed char var_16 = (signed char)26;
short var_17 = (short)2793;
int zero = 0;
long long int var_19 = -3407538540398697314LL;
unsigned int var_20 = 1280682246U;
int var_21 = -504091062;
long long int var_22 = -2864548497654895634LL;
unsigned short var_23 = (unsigned short)63207;
long long int arr_0 [23] ;
unsigned char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5804396238031372465LL : 4288054841648527691LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)250;
}

void checksum() {
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
