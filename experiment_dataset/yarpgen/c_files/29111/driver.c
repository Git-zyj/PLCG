#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
signed char var_7 = (signed char)-121;
unsigned int var_12 = 205311386U;
unsigned long long int var_15 = 13671629420298178044ULL;
int zero = 0;
int var_16 = 1118552491;
signed char var_17 = (signed char)-17;
unsigned long long int var_18 = 11995937032676763940ULL;
int var_19 = 1511050305;
unsigned short var_20 = (unsigned short)16817;
long long int var_21 = 3256644323969035839LL;
signed char arr_2 [13] [13] ;
unsigned long long int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 3828798979907553572ULL;
}

void checksum() {
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
