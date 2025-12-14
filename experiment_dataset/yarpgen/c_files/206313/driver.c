#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1059320688;
short var_2 = (short)-4565;
unsigned long long int var_4 = 16291166757029546198ULL;
long long int var_6 = 7022155096844771845LL;
signed char var_8 = (signed char)-97;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-87;
short var_16 = (short)400;
unsigned char var_17 = (unsigned char)80;
int zero = 0;
signed char var_18 = (signed char)(-127 - 1);
unsigned long long int var_19 = 2012961354440198369ULL;
signed char var_20 = (signed char)34;
unsigned char var_21 = (unsigned char)14;
signed char var_22 = (signed char)-30;
int var_23 = 1775284306;
unsigned short var_24 = (unsigned short)50911;
unsigned char arr_7 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)155 : (unsigned char)179;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
