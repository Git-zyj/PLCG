#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2724672977636374399LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)64;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-69;
int zero = 0;
unsigned char var_13 = (unsigned char)151;
long long int var_14 = -6282514003458226690LL;
short var_15 = (short)-31993;
unsigned char var_16 = (unsigned char)22;
long long int arr_5 [15] [15] ;
unsigned short arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -2027558694613183989LL : 1398901990631253917LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)19497 : (unsigned short)47187;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
