#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17200164637677393733ULL;
short var_1 = (short)3563;
int var_3 = 99892820;
unsigned char var_5 = (unsigned char)60;
int var_6 = 2050115227;
unsigned char var_9 = (unsigned char)120;
long long int var_10 = -5006737670521728046LL;
unsigned int var_11 = 4022906466U;
signed char var_15 = (signed char)-83;
unsigned long long int var_16 = 5036926603970906436ULL;
short var_18 = (short)-2706;
int zero = 0;
signed char var_20 = (signed char)-27;
signed char var_21 = (signed char)-113;
_Bool var_22 = (_Bool)1;
long long int var_23 = 5470351511931359771LL;
unsigned short var_24 = (unsigned short)60790;
unsigned char var_25 = (unsigned char)70;
short var_26 = (short)14299;
short var_27 = (short)32402;
unsigned int var_28 = 1502699430U;
long long int var_29 = 6036275905102370317LL;
signed char var_30 = (signed char)-34;
long long int var_31 = -100156783558426163LL;
_Bool var_32 = (_Bool)1;
unsigned int var_33 = 2743488975U;
unsigned int arr_2 [22] [22] ;
unsigned char arr_3 [22] [22] ;
short arr_4 [22] [22] ;
unsigned short arr_5 [22] [22] ;
unsigned int arr_6 [22] ;
signed char arr_7 [22] [22] [22] [22] [22] ;
signed char arr_8 [22] ;
long long int arr_10 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] ;
unsigned int arr_12 [22] [22] ;
long long int arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1058171934U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-8856;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)52235;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 534287228U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8217201783247044897LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 2678487814U : 1030306110U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 1328600409352404630LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
