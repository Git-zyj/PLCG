#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
unsigned char var_1 = (unsigned char)92;
unsigned char var_2 = (unsigned char)175;
long long int var_3 = 7638956875030402272LL;
int var_5 = -1336568478;
int var_8 = -308414757;
unsigned long long int var_9 = 7831604067543954118ULL;
unsigned long long int var_11 = 11374591236614468764ULL;
int zero = 0;
unsigned long long int var_12 = 4353823004497805520ULL;
unsigned long long int var_13 = 9042474563708924512ULL;
unsigned char var_14 = (unsigned char)170;
short var_15 = (short)27164;
unsigned long long int var_16 = 7380170600712290361ULL;
short var_17 = (short)-13844;
signed char var_18 = (signed char)58;
_Bool var_19 = (_Bool)1;
short var_20 = (short)6922;
short arr_0 [21] ;
short arr_1 [21] ;
signed char arr_2 [21] ;
_Bool arr_3 [10] ;
long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)22925;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-14109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -4678606009773486203LL : 7459245993559496089LL;
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
