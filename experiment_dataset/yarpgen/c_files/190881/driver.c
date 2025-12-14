#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22906;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-27;
short var_4 = (short)5711;
unsigned long long int var_5 = 8980109189331586804ULL;
unsigned long long int var_6 = 8019177725895653321ULL;
long long int var_7 = -1538441491754358809LL;
long long int var_10 = -3510945925951424255LL;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)163;
unsigned long long int var_14 = 18162826632428927078ULL;
signed char var_18 = (signed char)-88;
unsigned char var_19 = (unsigned char)189;
int zero = 0;
unsigned short var_20 = (unsigned short)50528;
_Bool var_21 = (_Bool)0;
long long int var_22 = 6484076149774687645LL;
unsigned long long int var_23 = 11651310809449433669ULL;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 16859058852754942886ULL;
long long int var_27 = 1537764957523682588LL;
unsigned long long int var_28 = 1674884206064910675ULL;
short arr_0 [23] ;
long long int arr_1 [23] ;
signed char arr_2 [23] ;
unsigned short arr_4 [23] ;
unsigned long long int arr_5 [23] [23] [23] [23] ;
unsigned long long int arr_6 [23] ;
unsigned char arr_7 [23] [23] [23] [23] ;
long long int arr_9 [23] [23] [23] ;
short arr_10 [23] [23] [23] [23] ;
signed char arr_12 [23] [23] ;
unsigned char arr_13 [23] [23] [23] [23] [23] [23] [23] ;
signed char arr_19 [23] [23] [23] ;
short arr_20 [23] [23] [23] [23] ;
unsigned char arr_21 [23] [23] [23] [23] ;
signed char arr_22 [23] [23] [23] [23] [23] [23] ;
short arr_23 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_28 [21] [21] [21] ;
signed char arr_29 [21] [21] [21] ;
unsigned long long int arr_38 [21] [21] [21] [21] [21] ;
unsigned short arr_14 [23] [23] [23] [23] [23] ;
unsigned long long int arr_15 [23] [23] [23] [23] [23] [23] ;
_Bool arr_16 [23] [23] ;
_Bool arr_24 [23] [23] [23] ;
unsigned char arr_32 [21] [21] [21] ;
unsigned char arr_40 [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)24213;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -4050761350214743514LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)14533;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8493541573212873593ULL : 5838322218190980314ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1253373748789183408ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -4627919434536432725LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)18011 : (short)18858;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-10868 : (short)23748;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (signed char)115 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)32102;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 9940469044842434013ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 10001316428980936582ULL : 153037309488855539ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)47258 : (unsigned short)5472;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 17459988784887709492ULL : 1406150359295328044ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)250 : (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned char)241 : (unsigned char)176;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
