#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
signed char var_1 = (signed char)106;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 2917720075281431665ULL;
unsigned int var_4 = 1513645814U;
signed char var_5 = (signed char)(-127 - 1);
unsigned long long int var_6 = 4580472000269649359ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)136;
unsigned char var_12 = (unsigned char)68;
unsigned char var_13 = (unsigned char)4;
long long int var_14 = -6639005103816157333LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 7657150215912460759LL;
unsigned char var_17 = (unsigned char)243;
int zero = 0;
signed char var_18 = (signed char)83;
unsigned char var_19 = (unsigned char)14;
unsigned long long int var_20 = 13432573705271346901ULL;
unsigned char var_21 = (unsigned char)208;
long long int var_22 = 2535659121805433232LL;
int var_23 = 1600102910;
_Bool var_24 = (_Bool)1;
int var_25 = 546444314;
signed char var_26 = (signed char)13;
unsigned long long int var_27 = 569599188516801821ULL;
unsigned char arr_0 [22] ;
long long int arr_1 [22] [22] ;
unsigned long long int arr_2 [22] ;
unsigned short arr_3 [22] ;
int arr_6 [22] ;
unsigned short arr_8 [22] ;
int arr_4 [22] ;
unsigned short arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 8370027063185111506LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 5166674120534184045ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)56001;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 1753748409;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)13994;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1048574139;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)51564;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
