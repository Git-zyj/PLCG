#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
short var_2 = (short)12322;
unsigned long long int var_3 = 12840610536508176783ULL;
signed char var_4 = (signed char)-114;
signed char var_5 = (signed char)29;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-36;
unsigned long long int var_9 = 2003544029760567270ULL;
signed char var_10 = (signed char)-124;
long long int var_11 = -4187804557134305110LL;
unsigned short var_12 = (unsigned short)46847;
signed char var_13 = (signed char)16;
int zero = 0;
short var_14 = (short)10353;
unsigned short var_15 = (unsigned short)44471;
unsigned char var_16 = (unsigned char)71;
unsigned long long int var_17 = 5721458214622096319ULL;
unsigned long long int var_18 = 5804178314806784277ULL;
unsigned long long int var_19 = 7467458727781236267ULL;
unsigned long long int var_20 = 630197926071814653ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 2159685147694600131ULL;
unsigned short var_24 = (unsigned short)24990;
signed char var_25 = (signed char)30;
unsigned short var_26 = (unsigned short)43957;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 12484168217017707442ULL;
unsigned short var_30 = (unsigned short)39703;
signed char var_31 = (signed char)18;
unsigned long long int var_32 = 15453903590346694125ULL;
unsigned short var_33 = (unsigned short)56532;
unsigned short arr_0 [20] ;
unsigned long long int arr_1 [20] ;
signed char arr_2 [10] ;
unsigned long long int arr_3 [10] ;
unsigned long long int arr_4 [10] [10] [10] ;
short arr_8 [10] ;
unsigned int arr_14 [10] [10] [10] ;
unsigned char arr_18 [10] [10] [10] [10] ;
unsigned long long int arr_19 [10] [10] [10] [10] ;
unsigned long long int arr_21 [10] [10] [10] ;
short arr_25 [21] [21] ;
unsigned char arr_26 [21] ;
unsigned char arr_27 [21] ;
unsigned long long int arr_28 [21] ;
unsigned long long int arr_29 [21] ;
unsigned short arr_30 [21] [21] ;
unsigned long long int arr_31 [21] ;
short arr_13 [10] [10] [10] [10] ;
signed char arr_23 [10] [10] ;
unsigned long long int arr_24 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)19333;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 12476054002603089101ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3151770218390259508ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8265717610571645565ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (short)-3357;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1911417819U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)98 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 14322678002826409217ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4312098974242213071ULL : 8087769551229882789ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (short)-11699;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = 11319468061811163503ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = 4622979744297754832ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)12525;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = 12914288277406459695ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)32424;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)52 : (signed char)-19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 3282887670378399880ULL : 115498770440347042ULL;
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
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
