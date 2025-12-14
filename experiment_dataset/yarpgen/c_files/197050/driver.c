#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
signed char var_1 = (signed char)44;
short var_2 = (short)-15947;
signed char var_3 = (signed char)102;
signed char var_4 = (signed char)81;
unsigned short var_6 = (unsigned short)26439;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)74;
int zero = 0;
signed char var_10 = (signed char)43;
unsigned long long int var_11 = 1187970104508545274ULL;
unsigned long long int var_12 = 17101280820706915214ULL;
signed char var_13 = (signed char)-126;
unsigned int var_14 = 3471199375U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)19444;
unsigned int arr_0 [10] ;
long long int arr_1 [10] ;
short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2094916960U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -139713843521048329LL : -985524656046117629LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-9707 : (short)26039;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
