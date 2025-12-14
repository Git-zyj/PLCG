#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1859173804;
short var_4 = (short)3097;
signed char var_5 = (signed char)-126;
short var_6 = (short)22015;
long long int var_10 = 6513121333491218764LL;
unsigned short var_11 = (unsigned short)8380;
short var_12 = (short)-17109;
short var_13 = (short)-730;
long long int var_14 = 7741027064790515581LL;
int var_15 = -1297500430;
int zero = 0;
long long int var_18 = 4524901302053913377LL;
unsigned int var_19 = 2527069203U;
unsigned long long int var_20 = 12649573145805858349ULL;
unsigned short var_21 = (unsigned short)990;
unsigned long long int arr_2 [14] [14] [14] ;
signed char arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3303579438800876728ULL : 2766875766197935620ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-25 : (signed char)-2;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
