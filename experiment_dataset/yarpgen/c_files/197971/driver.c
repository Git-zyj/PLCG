#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21394;
short var_3 = (short)1256;
int var_4 = 1088351358;
unsigned long long int var_5 = 16456364292357581695ULL;
long long int var_6 = 7352025561877194885LL;
unsigned int var_7 = 1156213489U;
short var_8 = (short)-26826;
long long int var_9 = -5890718316346297493LL;
int zero = 0;
unsigned long long int var_10 = 15615169193863671682ULL;
_Bool var_11 = (_Bool)1;
int var_12 = -1613739949;
signed char var_13 = (signed char)-32;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 9654669704643409319ULL;
unsigned long long int var_16 = 14568213121590526971ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)34996;
unsigned short var_19 = (unsigned short)6917;
unsigned long long int var_20 = 5376126425548119380ULL;
short var_21 = (short)5212;
unsigned long long int var_22 = 3253475067381714349ULL;
short var_23 = (short)28250;
signed char var_24 = (signed char)-72;
int var_25 = -1472958338;
unsigned short var_26 = (unsigned short)29876;
long long int var_27 = -8172497710285092269LL;
unsigned char var_28 = (unsigned char)196;
unsigned short var_29 = (unsigned short)29044;
short var_30 = (short)9435;
unsigned int var_31 = 1128566356U;
short var_32 = (short)3323;
unsigned long long int var_33 = 9568878452858128577ULL;
unsigned char arr_0 [24] [24] ;
unsigned int arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
short arr_3 [24] ;
long long int arr_6 [24] [24] [24] ;
short arr_8 [24] [24] [24] [24] ;
int arr_9 [24] [24] [24] [24] ;
signed char arr_12 [24] [24] [24] [24] [24] ;
short arr_13 [24] [24] [24] ;
unsigned int arr_17 [24] [24] ;
unsigned long long int arr_21 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1152041660U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)14165;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 6235869035211212169LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)28584 : (short)-10984;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -312043313;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-115 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)17975 : (short)19041;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = 4258992170U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2704478834826881269ULL : 8058477005256665895ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
