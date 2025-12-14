#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53649;
long long int var_1 = -5881408499891592225LL;
unsigned short var_2 = (unsigned short)3476;
int var_3 = -997601802;
signed char var_4 = (signed char)-57;
unsigned short var_7 = (unsigned short)49821;
signed char var_8 = (signed char)-76;
signed char var_10 = (signed char)83;
unsigned short var_11 = (unsigned short)12659;
unsigned short var_13 = (unsigned short)4209;
unsigned short var_14 = (unsigned short)28439;
int zero = 0;
int var_15 = 2142419056;
unsigned char var_16 = (unsigned char)228;
signed char var_17 = (signed char)62;
unsigned char var_18 = (unsigned char)253;
unsigned char var_19 = (unsigned char)205;
unsigned long long int var_20 = 15433771363315245117ULL;
short var_21 = (short)-883;
signed char arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned char arr_3 [22] [22] ;
unsigned char arr_4 [22] ;
unsigned char arr_5 [22] [22] ;
unsigned long long int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1823155860691129442LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 6490342154370891720ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
