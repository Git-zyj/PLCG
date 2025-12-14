#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
unsigned char var_2 = (unsigned char)216;
unsigned short var_3 = (unsigned short)13865;
short var_4 = (short)-23916;
int var_5 = -896913651;
unsigned long long int var_6 = 12589533129265527180ULL;
unsigned char var_7 = (unsigned char)59;
unsigned char var_9 = (unsigned char)53;
short var_10 = (short)8664;
unsigned short var_11 = (unsigned short)48670;
signed char var_12 = (signed char)-82;
short var_13 = (short)11766;
int var_15 = 1159105583;
unsigned long long int var_18 = 160169510664740657ULL;
int zero = 0;
short var_19 = (short)24348;
signed char var_20 = (signed char)44;
unsigned char var_21 = (unsigned char)254;
long long int var_22 = -6728817274215346436LL;
long long int var_23 = 1709444152602205251LL;
unsigned int var_24 = 1108039385U;
signed char var_25 = (signed char)50;
unsigned int var_26 = 1126462175U;
signed char var_27 = (signed char)88;
short var_28 = (short)32532;
unsigned long long int var_29 = 10681095960093708019ULL;
unsigned long long int var_30 = 9823214202428748907ULL;
unsigned char var_31 = (unsigned char)74;
long long int var_32 = -2176443492178770081LL;
unsigned long long int var_33 = 3849714426615966710ULL;
unsigned short var_34 = (unsigned short)43780;
unsigned short var_35 = (unsigned short)45452;
unsigned char var_36 = (unsigned char)115;
signed char var_37 = (signed char)38;
unsigned long long int var_38 = 16090398682440218020ULL;
int var_39 = -1463847436;
_Bool var_40 = (_Bool)0;
unsigned int var_41 = 1709661513U;
signed char var_42 = (signed char)-84;
unsigned char arr_4 [11] [11] ;
unsigned char arr_6 [11] [11] [11] ;
unsigned int arr_9 [11] [11] [11] [11] ;
unsigned int arr_10 [11] [11] [11] [11] [11] ;
signed char arr_11 [11] [11] [11] [11] [11] ;
_Bool arr_12 [11] [11] [11] [11] [11] ;
short arr_19 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_20 [11] [11] [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1185881666U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1360876351U : 96164524U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)14 : (signed char)60;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-15484;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 17353574724243648945ULL : 9496366369228254991ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
