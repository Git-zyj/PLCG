#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6047905487524566542LL;
unsigned long long int var_5 = 15297156880016231981ULL;
unsigned short var_6 = (unsigned short)52435;
int var_8 = 1395662652;
long long int var_9 = -1197425615975110911LL;
unsigned long long int var_10 = 13865270404984700871ULL;
signed char var_11 = (signed char)-39;
int var_12 = -628797307;
short var_13 = (short)23891;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4687258093533045550ULL;
unsigned char var_16 = (unsigned char)155;
unsigned long long int var_17 = 6704785630548057397ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 7403888417614834951ULL;
unsigned long long int var_20 = 2070603603047649974ULL;
unsigned long long int var_21 = 12604574147174040115ULL;
unsigned char arr_5 [12] [12] ;
signed char arr_12 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-60;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
