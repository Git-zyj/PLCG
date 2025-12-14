#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 147030801U;
short var_2 = (short)-7922;
unsigned short var_5 = (unsigned short)34879;
long long int var_7 = -143941953730357324LL;
unsigned int var_8 = 4234335739U;
long long int var_10 = -8012203230340985694LL;
unsigned long long int var_12 = 3876786252989387127ULL;
unsigned int var_17 = 263712304U;
int zero = 0;
int var_18 = -293075861;
unsigned int var_19 = 2031526971U;
unsigned char var_20 = (unsigned char)135;
unsigned short var_21 = (unsigned short)18221;
unsigned int var_22 = 515020309U;
int var_23 = 1588763916;
unsigned char var_24 = (unsigned char)137;
unsigned char var_25 = (unsigned char)47;
short var_26 = (short)27329;
unsigned short var_27 = (unsigned short)28239;
short var_28 = (short)-2483;
unsigned short arr_0 [20] ;
signed char arr_1 [20] ;
unsigned long long int arr_2 [20] ;
unsigned char arr_3 [20] ;
unsigned long long int arr_5 [20] ;
short arr_7 [20] ;
int arr_9 [20] [20] ;
unsigned char arr_10 [20] [20] ;
int arr_15 [20] [20] ;
unsigned long long int arr_4 [20] ;
int arr_8 [20] ;
int arr_13 [20] [20] [20] ;
int arr_14 [20] ;
long long int arr_20 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)32480;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 17149311931993554256ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16207425635695535947ULL : 16124032703290582200ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-10216 : (short)-8546;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 569329450;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = -980210733;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 8688658651071984330ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -805372602 : -1329587872;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1968350716 : -51432248;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -1606349730 : 382934139;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = -1040207028467927964LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
