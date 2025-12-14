#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
unsigned long long int var_3 = 1714293043169508399ULL;
short var_4 = (short)24387;
int var_11 = -547222021;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)10424;
int zero = 0;
int var_18 = -320180263;
unsigned char var_19 = (unsigned char)96;
int var_20 = -1765267760;
unsigned short var_21 = (unsigned short)15399;
int var_22 = -1602773517;
signed char var_23 = (signed char)-21;
long long int var_24 = -6683284243542074029LL;
long long int arr_4 [25] ;
unsigned char arr_18 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -7798219156634814889LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)172;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
