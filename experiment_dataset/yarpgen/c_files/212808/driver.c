#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned int var_1 = 1169716133U;
short var_2 = (short)-23029;
int var_3 = -2122339041;
int var_4 = 1817691188;
long long int var_5 = 460659720955465549LL;
unsigned long long int var_6 = 5288052851201018583ULL;
unsigned int var_7 = 2465925772U;
unsigned int var_8 = 421001254U;
unsigned short var_10 = (unsigned short)9032;
_Bool var_13 = (_Bool)1;
int var_14 = 118422150;
int zero = 0;
short var_15 = (short)22784;
long long int var_16 = 4729947469972594406LL;
long long int var_17 = 4084500911250757172LL;
unsigned int var_18 = 1889407960U;
unsigned int var_19 = 3130345854U;
short var_20 = (short)-30089;
unsigned char var_21 = (unsigned char)24;
signed char var_22 = (signed char)(-127 - 1);
signed char var_23 = (signed char)-10;
unsigned char var_24 = (unsigned char)40;
signed char var_25 = (signed char)72;
unsigned long long int var_26 = 1423352455610538304ULL;
_Bool var_27 = (_Bool)1;
int var_28 = -1113010762;
unsigned short var_29 = (unsigned short)1018;
long long int var_30 = -4851288580095836404LL;
int var_31 = -824321968;
int var_32 = 197265171;
_Bool var_33 = (_Bool)0;
int var_34 = -1157516032;
signed char arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
signed char arr_2 [22] ;
unsigned int arr_3 [22] ;
signed char arr_5 [22] ;
int arr_6 [22] [22] [22] ;
signed char arr_8 [22] [22] [22] [22] ;
unsigned long long int arr_10 [22] [22] [22] [22] [22] ;
int arr_13 [22] [22] [22] [22] ;
int arr_14 [22] [22] [22] [22] ;
int arr_4 [22] ;
unsigned short arr_21 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 282404377U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2879215865U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1505415698;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 16607834643865280926ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -1357180708;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 769709446;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1415892591;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64486 : (unsigned short)4746;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
