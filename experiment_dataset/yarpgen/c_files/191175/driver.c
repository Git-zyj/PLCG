#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7245;
signed char var_1 = (signed char)41;
long long int var_3 = -6339670913582106348LL;
int var_4 = 1057181223;
short var_5 = (short)7869;
unsigned long long int var_6 = 4875884170509932904ULL;
short var_7 = (short)-26966;
short var_8 = (short)3631;
unsigned int var_13 = 1604832876U;
int zero = 0;
short var_16 = (short)24873;
short var_17 = (short)10075;
unsigned long long int var_18 = 8167396856545094885ULL;
short var_19 = (short)-9753;
unsigned long long int var_20 = 7671375495365105554ULL;
unsigned char var_21 = (unsigned char)91;
unsigned char var_22 = (unsigned char)160;
unsigned long long int var_23 = 8384037855462842391ULL;
short var_24 = (short)5576;
long long int var_25 = 7117197912209503246LL;
short var_26 = (short)-22447;
short var_27 = (short)28860;
long long int var_28 = -8302983567286586129LL;
long long int var_29 = 3830623689075917603LL;
unsigned int var_30 = 1735983298U;
unsigned int var_31 = 1973126833U;
long long int var_32 = -8035627196862217552LL;
unsigned int var_33 = 529033995U;
short var_34 = (short)-20944;
int var_35 = -1603481979;
unsigned long long int var_36 = 9064419959650506488ULL;
unsigned long long int arr_0 [18] ;
long long int arr_1 [18] [18] ;
short arr_6 [12] ;
short arr_7 [12] ;
short arr_9 [12] ;
unsigned long long int arr_11 [12] [12] [12] ;
short arr_12 [12] [12] [12] [12] ;
unsigned char arr_14 [12] [12] [12] [12] ;
long long int arr_20 [12] [12] ;
long long int arr_23 [12] [12] [12] ;
unsigned long long int arr_29 [21] ;
signed char arr_30 [21] [21] ;
int arr_31 [21] [21] ;
unsigned char arr_34 [21] ;
unsigned char arr_3 [18] ;
unsigned int arr_4 [18] ;
signed char arr_5 [18] [18] ;
unsigned long long int arr_18 [12] [12] ;
unsigned long long int arr_21 [12] [12] [12] [12] ;
unsigned char arr_25 [12] [12] [12] ;
int arr_26 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 13544440068195253931ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -5861447893568002458LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)-27557;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)-13311;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)4392 : (short)-10382;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8299955484051593051ULL : 3751952275088930700ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)22566 : (short)-17101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)176 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? -3569011213198736267LL : -2163947222824839997LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 9063631500083858018LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 3972948027825633623ULL : 3644618421179127872ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-123 : (signed char)-84;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? 1020670015 : -763460512;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1443631976U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 11791398181925392344ULL : 5753385103918322640ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 17363985463406052136ULL : 10516990563264242928ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)223 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 1344927027 : 632033204;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
