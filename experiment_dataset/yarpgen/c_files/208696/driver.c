#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
long long int var_1 = -7546618521562846940LL;
long long int var_2 = 6072951972815345605LL;
unsigned short var_3 = (unsigned short)23487;
unsigned long long int var_4 = 2112956677035370379ULL;
unsigned short var_6 = (unsigned short)45443;
long long int var_7 = -3408216640092562260LL;
unsigned long long int var_8 = 6507856279035225687ULL;
signed char var_9 = (signed char)50;
unsigned int var_10 = 3638089215U;
long long int var_12 = -6915765125007571289LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-62;
short var_15 = (short)27837;
unsigned short var_16 = (unsigned short)64921;
unsigned int var_17 = 3401710103U;
unsigned int var_18 = 1629156834U;
unsigned int var_19 = 1913698888U;
unsigned short var_20 = (unsigned short)50738;
unsigned short var_21 = (unsigned short)41400;
signed char var_22 = (signed char)-21;
unsigned long long int var_23 = 8421761794779866599ULL;
long long int var_24 = -2571567913649389411LL;
signed char var_25 = (signed char)105;
unsigned int var_26 = 1129107049U;
unsigned char var_27 = (unsigned char)76;
unsigned short var_28 = (unsigned short)15512;
long long int var_29 = 4457737996034523550LL;
long long int var_30 = 5230510320256905435LL;
unsigned short var_31 = (unsigned short)24318;
unsigned int var_32 = 2251150135U;
unsigned short var_33 = (unsigned short)20246;
unsigned short var_34 = (unsigned short)60944;
signed char var_35 = (signed char)-77;
long long int var_36 = 8719419597387717752LL;
unsigned long long int var_37 = 17380835635387936833ULL;
unsigned int var_38 = 2721206648U;
short var_39 = (short)-5936;
_Bool var_40 = (_Bool)1;
long long int var_41 = 415348940430980371LL;
_Bool var_42 = (_Bool)1;
long long int var_43 = 6266777378024680747LL;
unsigned int var_44 = 2994461938U;
unsigned long long int var_45 = 18251167156659608665ULL;
unsigned char var_46 = (unsigned char)27;
_Bool arr_1 [19] ;
unsigned int arr_6 [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] ;
long long int arr_10 [19] ;
unsigned short arr_13 [19] [19] [19] [19] ;
unsigned long long int arr_15 [19] [19] [19] [19] ;
int arr_18 [19] [19] [19] [19] [19] ;
unsigned short arr_20 [19] [19] ;
long long int arr_24 [19] [19] ;
unsigned char arr_25 [19] [19] [19] ;
unsigned long long int arr_28 [19] [19] ;
unsigned int arr_42 [23] ;
unsigned int arr_43 [23] ;
_Bool arr_44 [23] ;
long long int arr_45 [23] [23] ;
short arr_46 [21] ;
int arr_47 [21] [21] ;
unsigned char arr_49 [21] ;
unsigned short arr_55 [21] [21] [21] [21] ;
unsigned int arr_59 [21] [21] [21] [21] [21] ;
unsigned char arr_60 [21] [21] [21] [21] [21] [21] ;
signed char arr_23 [19] ;
unsigned int arr_36 [19] ;
long long int arr_40 [10] ;
signed char arr_41 [10] ;
short arr_56 [21] ;
unsigned int arr_61 [21] [21] ;
_Bool arr_72 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 2412153325U : 2460775059U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 14661528773719854649ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 3712869871003432146LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)29473;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 14327902867327731066ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -1927320648 : 1289485388;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)11703;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = 5775063521631274856LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 17281378993162689344ULL : 12735576494235915915ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = 1418180223U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_43 [i_0] = 4283357334U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_44 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_45 [i_0] [i_1] = -8385049452815896718LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_46 [i_0] = (short)-28493;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_47 [i_0] [i_1] = -834032669;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_49 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34316;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = 4101206682U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 2751115802U : 2119944086U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_40 [i_0] = -4511341513562800852LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_56 [i_0] = (short)23618;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_61 [i_0] [i_1] = 2421391544U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_61 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_72 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
