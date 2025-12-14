#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)108;
unsigned short var_3 = (unsigned short)19293;
signed char var_5 = (signed char)86;
unsigned short var_6 = (unsigned short)9611;
unsigned long long int var_7 = 15825829658554994934ULL;
unsigned long long int var_10 = 1700036119030498200ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)19448;
long long int var_12 = 6007722009526116488LL;
unsigned short var_13 = (unsigned short)60389;
short var_14 = (short)-3503;
unsigned short arr_0 [22] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1153 : (unsigned short)20108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-12 : (signed char)29;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
