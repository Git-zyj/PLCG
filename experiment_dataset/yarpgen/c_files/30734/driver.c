#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3659754839U;
int var_2 = 71712282;
int var_5 = 1376494800;
unsigned long long int var_6 = 858988072395229185ULL;
unsigned char var_8 = (unsigned char)217;
long long int var_9 = -4227521535847378426LL;
unsigned short var_10 = (unsigned short)60240;
unsigned long long int var_12 = 16730527096351391628ULL;
short var_13 = (short)5337;
int var_14 = -1523242399;
int zero = 0;
unsigned char var_17 = (unsigned char)103;
unsigned short var_18 = (unsigned short)30986;
unsigned long long int var_19 = 6844086414473363680ULL;
unsigned short var_20 = (unsigned short)36165;
signed char var_21 = (signed char)-79;
unsigned long long int var_22 = 6205620058138114702ULL;
signed char var_23 = (signed char)102;
unsigned long long int var_24 = 1830048876520434137ULL;
unsigned int var_25 = 2751595710U;
short var_26 = (short)4426;
unsigned long long int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned short arr_4 [16] [16] ;
int arr_5 [16] [16] ;
int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 173077639804005194ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)254 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)17821;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1877738431 : -1465952387;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 341554318 : 1291685856;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
