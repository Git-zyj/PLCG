#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned long long int var_1 = 8893243939955788091ULL;
unsigned char var_2 = (unsigned char)41;
int var_5 = -1098106811;
long long int var_6 = 5595787093479210507LL;
unsigned short var_7 = (unsigned short)25639;
int var_9 = 211864169;
unsigned int var_10 = 4075029820U;
int var_11 = -2106641008;
unsigned int var_12 = 1573311140U;
unsigned short var_14 = (unsigned short)39525;
int zero = 0;
unsigned int var_15 = 1230997234U;
unsigned int var_16 = 3944440710U;
unsigned short var_17 = (unsigned short)13178;
int var_18 = -57621916;
signed char var_19 = (signed char)123;
unsigned long long int var_20 = 4570693632644892013ULL;
int var_21 = -27545984;
signed char var_22 = (signed char)-1;
unsigned int var_23 = 630339539U;
short var_24 = (short)16377;
unsigned short var_25 = (unsigned short)5750;
long long int var_26 = 4863281980640384364LL;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)117;
signed char var_29 = (signed char)-105;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)65116;
unsigned int var_32 = 2947313838U;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)97;
int var_35 = -777580004;
unsigned char var_36 = (unsigned char)35;
int var_37 = -1010978721;
int var_38 = -1361425933;
int var_39 = 801006579;
signed char var_40 = (signed char)-66;
signed char var_41 = (signed char)56;
short var_42 = (short)20709;
unsigned long long int arr_0 [17] [17] ;
unsigned char arr_4 [17] ;
long long int arr_6 [17] ;
signed char arr_10 [17] ;
unsigned char arr_11 [17] [17] [17] ;
unsigned int arr_27 [17] [17] [17] [17] [17] ;
short arr_28 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 12349751841639024229ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 7368543829305953048LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 720214625U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (short)-8502;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
