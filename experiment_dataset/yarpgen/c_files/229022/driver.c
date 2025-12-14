#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 615189585U;
unsigned int var_4 = 1282098053U;
unsigned char var_6 = (unsigned char)111;
short var_8 = (short)-1102;
unsigned short var_9 = (unsigned short)20887;
int var_10 = -947179116;
unsigned char var_12 = (unsigned char)72;
int zero = 0;
long long int var_14 = 5191915059417812075LL;
unsigned short var_15 = (unsigned short)12076;
long long int var_16 = 3182000179267415900LL;
unsigned short arr_0 [22] ;
signed char arr_1 [22] ;
int arr_2 [22] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)19359;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 463001863;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)-121;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
