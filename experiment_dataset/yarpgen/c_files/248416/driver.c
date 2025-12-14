#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
short var_1 = (short)15282;
unsigned char var_2 = (unsigned char)211;
unsigned short var_3 = (unsigned short)47965;
long long int var_4 = 7229449423656344651LL;
short var_5 = (short)29074;
long long int var_6 = -4258723857293529283LL;
int var_7 = -836758202;
unsigned short var_8 = (unsigned short)18177;
unsigned char var_9 = (unsigned char)63;
int zero = 0;
short var_10 = (short)-11282;
long long int var_11 = 2773792844382364318LL;
short var_12 = (short)-2398;
unsigned char var_13 = (unsigned char)145;
short var_14 = (short)31240;
unsigned long long int var_15 = 7949957858788285480ULL;
unsigned char var_16 = (unsigned char)3;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
short var_19 = (short)13855;
unsigned int var_20 = 2440578875U;
long long int var_21 = -6340500811066208411LL;
unsigned char var_22 = (unsigned char)106;
unsigned char arr_0 [17] [17] ;
unsigned char arr_2 [17] ;
unsigned int arr_4 [17] [17] [17] ;
unsigned char arr_5 [17] [17] [17] ;
unsigned long long int arr_8 [17] [17] [17] [17] ;
_Bool arr_10 [17] [17] [17] ;
short arr_11 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 829096760U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 482469617181440772ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)701;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
