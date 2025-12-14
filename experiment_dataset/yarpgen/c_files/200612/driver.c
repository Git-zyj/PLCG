#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5845265761844654567ULL;
unsigned char var_5 = (unsigned char)92;
unsigned char var_6 = (unsigned char)167;
int var_7 = -1600258808;
unsigned short var_8 = (unsigned short)37084;
unsigned int var_9 = 1293130145U;
unsigned char var_10 = (unsigned char)215;
unsigned char var_11 = (unsigned char)108;
unsigned int var_12 = 2487039711U;
signed char var_13 = (signed char)-48;
int zero = 0;
long long int var_14 = 1488216920854886989LL;
_Bool var_15 = (_Bool)1;
int var_16 = 410164408;
int var_17 = -1504393221;
unsigned short var_18 = (unsigned short)39892;
unsigned long long int var_19 = 2814064301102609845ULL;
unsigned long long int var_20 = 7981954209357249207ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)15385;
long long int var_23 = 8904752930472862963LL;
unsigned int var_24 = 1369644583U;
short var_25 = (short)-4627;
unsigned long long int var_26 = 7694231506945038061ULL;
unsigned short var_27 = (unsigned short)54251;
int var_28 = -2057752689;
_Bool var_29 = (_Bool)1;
long long int var_30 = 132084444935731971LL;
unsigned char var_31 = (unsigned char)59;
unsigned short var_32 = (unsigned short)35198;
_Bool arr_1 [17] ;
signed char arr_4 [17] [17] [17] ;
_Bool arr_8 [17] [17] ;
unsigned short arr_10 [17] [17] ;
_Bool arr_16 [10] ;
unsigned short arr_20 [10] ;
unsigned char arr_34 [25] [25] ;
signed char arr_36 [25] ;
_Bool arr_37 [25] ;
long long int arr_38 [25] [25] ;
unsigned char arr_41 [25] [25] [25] ;
unsigned char arr_46 [25] [25] [25] ;
unsigned char arr_49 [25] [25] [25] [25] [25] [25] ;
short arr_50 [25] ;
unsigned long long int arr_52 [25] [25] [25] [25] [25] [25] [25] ;
long long int arr_56 [25] [25] [25] [25] [25] ;
long long int arr_6 [17] ;
signed char arr_7 [17] ;
unsigned int arr_12 [17] [17] ;
unsigned char arr_13 [17] ;
signed char arr_18 [10] ;
_Bool arr_23 [10] ;
unsigned char arr_27 [11] ;
unsigned long long int arr_33 [11] ;
long long int arr_39 [25] ;
_Bool arr_40 [25] [25] [25] ;
signed char arr_44 [25] [25] ;
_Bool arr_53 [25] ;
unsigned short arr_58 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)50783;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (unsigned short)17720;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = 4267581513203792549LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)63 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_50 [i_0] = (short)9381;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 878985726428088724ULL : 9967783951694570933ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -8172922566397469183LL : -7137172382417874819LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -7334752449397399890LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = 1522158146U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 3368233403231504606ULL : 5768404360823571594ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = 7901379375661925713LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_44 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-107 : (signed char)-82;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)26780 : (unsigned short)54819;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
