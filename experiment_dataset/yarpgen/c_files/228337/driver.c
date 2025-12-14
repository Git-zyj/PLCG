#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned long long int var_1 = 9186113861677314578ULL;
_Bool var_2 = (_Bool)1;
int var_3 = -2027401700;
unsigned char var_4 = (unsigned char)161;
unsigned int var_5 = 246945345U;
short var_6 = (short)-17610;
unsigned char var_7 = (unsigned char)27;
int var_8 = 240019329;
unsigned int var_9 = 1306582395U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)44300;
short var_13 = (short)-12543;
unsigned int var_15 = 1742441818U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3780572454U;
int zero = 0;
unsigned short var_19 = (unsigned short)57612;
short var_20 = (short)13553;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1482841852U;
int var_23 = 1231161704;
unsigned long long int var_24 = 3488895728713063833ULL;
long long int var_25 = 6052634208638280199LL;
short var_26 = (short)-22823;
unsigned long long int var_27 = 7840627179991845696ULL;
unsigned long long int var_28 = 2955511565429472500ULL;
signed char var_29 = (signed char)-66;
long long int var_30 = 6032925966973806162LL;
unsigned long long int var_31 = 10496971628725303648ULL;
unsigned char var_32 = (unsigned char)219;
signed char var_33 = (signed char)-38;
_Bool arr_0 [13] ;
unsigned char arr_2 [13] [13] [13] ;
long long int arr_3 [13] ;
short arr_4 [13] ;
int arr_6 [13] ;
unsigned short arr_11 [13] ;
unsigned short arr_13 [13] [13] ;
unsigned int arr_22 [13] [13] [13] ;
unsigned char arr_26 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_31 [25] ;
long long int arr_32 [25] ;
unsigned char arr_33 [25] ;
unsigned char arr_37 [25] ;
long long int arr_16 [13] [13] [13] [13] ;
signed char arr_17 [13] [13] [13] [13] ;
unsigned long long int arr_18 [13] [13] [13] ;
unsigned int arr_27 [13] [13] [13] [13] ;
long long int arr_28 [13] [13] [13] [13] [13] ;
long long int arr_29 [13] ;
signed char arr_30 [13] ;
short arr_34 [25] ;
unsigned int arr_35 [25] ;
unsigned long long int arr_40 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)248 : (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1601302071120629874LL : -6682160167038633972LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)24272;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -440090555 : 1793081954;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (unsigned short)34117;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)20883 : (unsigned short)49027;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1616800373U : 313930362U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = 1663779248U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = 2219220364586859492LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -5023608818556613718LL : 6625102900410411383LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)121 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 14341975739966404486ULL : 8461525470597017264ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1480266209U : 1856115546U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 6543987650867293353LL : -766126000694326347LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 5051487020608328676LL : -7404923273889130162LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (short)15791 : (short)13034;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 3158271516U : 123937627U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_40 [i_0] = 14604149949154169698ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
