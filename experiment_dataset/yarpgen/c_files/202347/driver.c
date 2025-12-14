#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -865285572;
int var_5 = -1915431451;
signed char var_6 = (signed char)-90;
unsigned short var_7 = (unsigned short)39578;
unsigned long long int var_9 = 5656618861680642559ULL;
unsigned long long int var_11 = 430818769727236361ULL;
unsigned short var_13 = (unsigned short)26547;
int zero = 0;
int var_14 = -1838909970;
unsigned long long int var_15 = 8666225644068554530ULL;
unsigned long long int var_16 = 14590159261170520529ULL;
unsigned long long int var_17 = 13081654763687951184ULL;
short var_18 = (short)-4873;
long long int var_19 = -5156316108715060257LL;
unsigned short arr_3 [18] ;
unsigned short arr_4 [18] ;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)22922;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)17345;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2057022908U : 1277604605U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
