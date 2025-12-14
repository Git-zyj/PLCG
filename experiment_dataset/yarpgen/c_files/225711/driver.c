#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 665082955U;
long long int var_2 = -9066178398676905394LL;
unsigned int var_5 = 1228984984U;
long long int var_8 = -5149919572057973099LL;
unsigned char var_9 = (unsigned char)105;
unsigned char var_11 = (unsigned char)16;
long long int var_13 = 3170167224285204738LL;
unsigned long long int var_15 = 131210824821977700ULL;
signed char var_16 = (signed char)19;
unsigned long long int var_17 = 5965862970497080603ULL;
int zero = 0;
int var_18 = 1840770032;
signed char var_19 = (signed char)-25;
unsigned long long int var_20 = 15433572263393475681ULL;
long long int var_21 = -9099507998560379107LL;
unsigned char var_22 = (unsigned char)252;
unsigned int var_23 = 3737846626U;
signed char var_24 = (signed char)-46;
unsigned long long int var_25 = 11996109266484852382ULL;
unsigned short var_26 = (unsigned short)58180;
unsigned char var_27 = (unsigned char)31;
unsigned char var_28 = (unsigned char)36;
unsigned short var_29 = (unsigned short)27472;
unsigned char var_30 = (unsigned char)169;
short var_31 = (short)10713;
signed char var_32 = (signed char)89;
int var_33 = -473546734;
unsigned short arr_0 [21] [21] ;
long long int arr_1 [21] ;
_Bool arr_4 [21] ;
unsigned short arr_5 [21] [21] ;
unsigned char arr_6 [21] ;
unsigned int arr_11 [21] ;
signed char arr_12 [21] [21] ;
long long int arr_15 [21] [21] [21] ;
unsigned long long int arr_16 [21] [21] [21] [21] [21] ;
unsigned char arr_3 [21] ;
unsigned short arr_18 [21] ;
unsigned char arr_29 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)58625;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 24441407931786629LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)57777;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 392494583U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1153238604834110512LL : 413230270900863133LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 18020006204786341594ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (unsigned short)21289;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)145 : (unsigned char)35;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
