#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19543;
_Bool var_1 = (_Bool)0;
long long int var_2 = 7415948006846290442LL;
unsigned char var_3 = (unsigned char)161;
unsigned int var_4 = 1704559645U;
int var_5 = -2114631140;
unsigned long long int var_6 = 9444013792079183119ULL;
unsigned char var_7 = (unsigned char)43;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)49;
int var_10 = 1192679402;
unsigned char var_11 = (unsigned char)114;
signed char var_13 = (signed char)-117;
int zero = 0;
unsigned int var_14 = 104414653U;
unsigned long long int var_15 = 12688423671352309437ULL;
signed char var_16 = (signed char)-91;
unsigned int var_17 = 2152715199U;
unsigned int var_18 = 1324117900U;
long long int var_19 = -317598076014694723LL;
unsigned long long int var_20 = 13789695908797410403ULL;
long long int var_21 = -1341277407993801981LL;
unsigned int var_22 = 330786340U;
unsigned int var_23 = 1922359094U;
signed char var_24 = (signed char)29;
unsigned int var_25 = 2083240434U;
unsigned short var_26 = (unsigned short)53266;
long long int var_27 = 3712689867317864316LL;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)181;
unsigned char var_30 = (unsigned char)38;
unsigned int var_31 = 2449900200U;
long long int var_32 = 7026349632422949417LL;
unsigned char var_33 = (unsigned char)138;
short var_34 = (short)-8661;
unsigned long long int var_35 = 17791246681895575443ULL;
unsigned long long int var_36 = 4993959992237479356ULL;
long long int var_37 = -4540483573599414355LL;
unsigned int var_38 = 1376995006U;
unsigned short var_39 = (unsigned short)60667;
short var_40 = (short)-19096;
signed char arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
unsigned int arr_2 [23] ;
long long int arr_3 [23] ;
int arr_5 [23] ;
unsigned int arr_9 [23] [23] ;
long long int arr_12 [23] [23] [23] [23] [23] ;
unsigned char arr_16 [23] [23] [23] [23] [23] [23] [23] ;
_Bool arr_17 [23] [23] ;
int arr_18 [23] [23] ;
int arr_22 [23] [23] [23] [23] ;
int arr_23 [23] [23] [23] [23] ;
long long int arr_29 [23] [23] [23] [23] ;
long long int arr_6 [23] ;
long long int arr_33 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_38 [23] [23] [23] ;
_Bool arr_39 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)14585;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1943706663U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1128463751631105938LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 666894358;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 225269634U : 130674364U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 1912006898908835607LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = -1156500650;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2821569 : 1151601137;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -907210572;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3625155054382292705LL : -3606421883404001650LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1696613346809480552LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? -8084332872459255774LL : 309859128362379498LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11459967834247133332ULL : 5971367816655148790ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_39 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
