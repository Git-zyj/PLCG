#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)181;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)90;
signed char var_10 = (signed char)-7;
int zero = 0;
long long int var_19 = -7160547268832556460LL;
short var_20 = (short)23409;
unsigned long long int var_21 = 15684929697345582760ULL;
unsigned short arr_1 [20] ;
unsigned char arr_3 [20] ;
unsigned short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10965 : (unsigned short)5043;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)92 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56237 : (unsigned short)36695;
}

void checksum() {
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
