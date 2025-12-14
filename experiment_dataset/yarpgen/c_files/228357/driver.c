#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1817295041;
unsigned long long int var_1 = 11960731095187934579ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)9;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-10303;
int var_8 = 2032143937;
unsigned char var_9 = (unsigned char)5;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6808518735305696570LL;
unsigned char var_12 = (unsigned char)51;
int zero = 0;
int var_13 = -1450472396;
long long int var_14 = 4604636937926657809LL;
long long int var_15 = -854870057219546440LL;
unsigned long long int var_16 = 16932892001080707003ULL;
unsigned char var_17 = (unsigned char)175;
int var_18 = 417594838;
unsigned int var_19 = 1631278403U;
unsigned long long int var_20 = 12093425849153377507ULL;
unsigned char var_21 = (unsigned char)6;
long long int var_22 = -4666930605488906292LL;
short var_23 = (short)9752;
unsigned char var_24 = (unsigned char)232;
unsigned short var_25 = (unsigned short)10524;
unsigned char var_26 = (unsigned char)62;
short var_27 = (short)5782;
unsigned short arr_0 [20] ;
int arr_1 [20] ;
long long int arr_2 [20] [20] [20] ;
long long int arr_3 [20] [20] [20] ;
unsigned char arr_4 [20] [20] [20] ;
unsigned long long int arr_7 [17] ;
unsigned long long int arr_8 [17] ;
unsigned char arr_12 [17] [17] [17] ;
int arr_13 [17] ;
unsigned long long int arr_14 [17] ;
unsigned char arr_16 [17] [17] ;
unsigned char arr_19 [17] [17] ;
long long int arr_5 [20] ;
_Bool arr_6 [20] ;
unsigned char arr_11 [17] [17] ;
long long int arr_15 [17] [17] [17] ;
long long int arr_20 [17] [17] [17] ;
short arr_24 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)3896;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1561485005;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1221693257315003033LL : -991087394326108791LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -3827755265642266734LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)141 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2761647726751941169ULL : 16122193976948518920ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 7595638252817871049ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = -1012586138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 10425688952856476136ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -5876960418466835911LL : 4949141998923839545LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2281279736364671430LL : -6188169167651605990LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8845574086079477855LL : -777159459354020049LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (short)32330;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
