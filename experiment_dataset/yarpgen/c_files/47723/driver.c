#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
signed char var_1 = (signed char)-83;
unsigned long long int var_2 = 14736278057238799395ULL;
long long int var_3 = -2842633731349757475LL;
unsigned short var_4 = (unsigned short)40147;
unsigned short var_5 = (unsigned short)3820;
unsigned short var_6 = (unsigned short)34701;
unsigned long long int var_7 = 446480709654705013ULL;
unsigned short var_8 = (unsigned short)56974;
unsigned char var_9 = (unsigned char)84;
short var_10 = (short)1970;
unsigned char var_11 = (unsigned char)219;
int zero = 0;
unsigned short var_12 = (unsigned short)29000;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-3481;
unsigned int var_15 = 4207780963U;
unsigned long long int var_16 = 14795854841399070451ULL;
short var_17 = (short)4942;
signed char var_18 = (signed char)-58;
unsigned short var_19 = (unsigned short)64080;
short var_20 = (short)7974;
unsigned long long int var_21 = 17350450650176973345ULL;
unsigned char var_22 = (unsigned char)129;
unsigned long long int var_23 = 15822068785560739051ULL;
unsigned int var_24 = 856107685U;
unsigned char var_25 = (unsigned char)183;
unsigned int var_26 = 348654197U;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 9087526967828597213ULL;
unsigned long long int var_29 = 11820586722277414315ULL;
int var_30 = -735198461;
unsigned long long int var_31 = 6738945632740834313ULL;
_Bool var_32 = (_Bool)1;
unsigned short var_33 = (unsigned short)25660;
short arr_7 [14] [14] [14] ;
short arr_22 [20] ;
unsigned int arr_29 [25] ;
unsigned char arr_33 [25] ;
unsigned int arr_47 [25] [25] [25] ;
long long int arr_62 [25] ;
unsigned int arr_70 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-8497;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (short)-12757 : (short)-8483;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = 1912445117U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1365848394U : 47549745U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_62 [i_0] = (i_0 % 2 == 0) ? -1031803715602817912LL : 8585156479934927096LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_70 [i_0] [i_1] = 3538808750U;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_70 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
