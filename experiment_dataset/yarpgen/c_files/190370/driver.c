#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1466203394U;
long long int var_1 = -7857523233321538129LL;
unsigned int var_2 = 3204482086U;
long long int var_3 = 2801474265766776621LL;
unsigned short var_6 = (unsigned short)37467;
long long int var_7 = 7726075743077941240LL;
unsigned short var_8 = (unsigned short)61841;
int var_10 = -88754886;
unsigned char var_13 = (unsigned char)158;
unsigned char var_14 = (unsigned char)24;
unsigned short var_16 = (unsigned short)64171;
int zero = 0;
unsigned char var_18 = (unsigned char)60;
unsigned int var_19 = 2768168322U;
unsigned int var_20 = 2784690184U;
signed char var_21 = (signed char)80;
int arr_0 [17] [17] ;
unsigned int arr_4 [17] [17] [17] ;
unsigned int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 292983601;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1586708702U : 1357188826U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 752708096U : 657755075U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
