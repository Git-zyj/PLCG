#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2007565754;
unsigned short var_1 = (unsigned short)20788;
unsigned long long int var_3 = 10831218051530466994ULL;
unsigned int var_4 = 3567271089U;
unsigned char var_5 = (unsigned char)42;
unsigned short var_6 = (unsigned short)39284;
signed char var_7 = (signed char)95;
short var_8 = (short)7850;
int var_9 = -1458307384;
long long int var_11 = -5554523950466705653LL;
long long int var_12 = -3407126826329004433LL;
long long int var_13 = -4150537987580213812LL;
unsigned long long int var_14 = 12377888629034857782ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 12573688436456845632ULL;
int zero = 0;
signed char var_17 = (signed char)47;
unsigned long long int var_18 = 13444585368568362240ULL;
unsigned short var_19 = (unsigned short)53721;
unsigned long long int var_20 = 11026947303768427516ULL;
long long int var_21 = 2256029631316044531LL;
long long int var_22 = -1945382801865189509LL;
int var_23 = 2060664268;
short var_24 = (short)22536;
signed char var_25 = (signed char)101;
unsigned short var_26 = (unsigned short)9456;
unsigned long long int var_27 = 12762605433355477743ULL;
int var_28 = 1787229913;
unsigned char var_29 = (unsigned char)38;
signed char var_30 = (signed char)40;
unsigned char var_31 = (unsigned char)205;
int var_32 = 1812268186;
int var_33 = 1959978863;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned int arr_3 [25] ;
unsigned long long int arr_4 [25] [25] [25] ;
unsigned int arr_5 [25] ;
short arr_6 [25] ;
short arr_7 [25] [25] [25] ;
short arr_11 [25] [25] [25] ;
unsigned char arr_12 [25] [25] ;
signed char arr_13 [25] [25] [25] [25] ;
unsigned long long int arr_17 [25] [25] ;
int arr_19 [25] ;
int arr_20 [25] ;
unsigned long long int arr_21 [25] [25] [25] ;
unsigned int arr_24 [25] [25] [25] ;
unsigned long long int arr_8 [25] ;
int arr_18 [25] [25] ;
unsigned long long int arr_22 [25] ;
unsigned long long int arr_23 [25] ;
int arr_26 [25] ;
int arr_27 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 13622080023528554806ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 11648856809110881820ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 639181304U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 14957774315291495875ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2800126111U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)-30393;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-20985;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)30756;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = 9357770112558625737ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = -1796896211;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 1955600517;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 926677908443485184ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 1469988627U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 13624351346244712513ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = -87635056;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = 6550454193539881609ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 16008872013621780547ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = 229723521;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = -1805090232;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
