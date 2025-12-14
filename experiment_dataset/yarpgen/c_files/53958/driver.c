#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10521645424643684283ULL;
unsigned int var_1 = 4178017517U;
unsigned int var_2 = 509054603U;
short var_4 = (short)-28485;
long long int var_5 = 1507383067000433281LL;
unsigned int var_7 = 1980833266U;
long long int var_8 = -3495606516915956680LL;
unsigned long long int var_9 = 9213896493877044028ULL;
long long int var_10 = -7985078970893583719LL;
short var_11 = (short)-792;
unsigned int var_13 = 850034135U;
signed char var_14 = (signed char)-96;
unsigned int var_15 = 4135514259U;
unsigned int var_16 = 3137917820U;
int zero = 0;
int var_17 = -1381681807;
short var_18 = (short)9574;
long long int var_19 = 8642088885670172873LL;
long long int var_20 = 6476688939532924960LL;
int var_21 = -1678904238;
unsigned int var_22 = 2931301516U;
long long int var_23 = -1679491278627605447LL;
unsigned int var_24 = 1493142248U;
unsigned int var_25 = 3881994597U;
signed char var_26 = (signed char)23;
long long int var_27 = -2545112713741982140LL;
unsigned int var_28 = 2644911624U;
long long int var_29 = 4124991128158275969LL;
signed char var_30 = (signed char)29;
unsigned short var_31 = (unsigned short)47117;
unsigned int var_32 = 1302574619U;
long long int arr_0 [20] ;
short arr_1 [20] ;
unsigned int arr_5 [20] [20] [20] ;
short arr_6 [20] [20] [20] ;
unsigned int arr_7 [20] ;
long long int arr_9 [20] [20] [20] [20] ;
long long int arr_16 [20] [20] ;
unsigned int arr_17 [20] ;
unsigned int arr_18 [20] ;
int arr_2 [20] ;
long long int arr_3 [20] [20] ;
short arr_19 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -5563201824536874324LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-9820;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1152292411U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-10476 : (short)24712;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1360824353U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -7487977436198798627LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = -939330443179938060LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 960735398U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 206862394U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1479247156;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 8368395084835828220LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)23518 : (short)-27112;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
