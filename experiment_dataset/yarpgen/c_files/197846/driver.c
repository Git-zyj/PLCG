#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5110512881468830739LL;
unsigned long long int var_1 = 1729701122982627031ULL;
unsigned char var_2 = (unsigned char)182;
unsigned short var_3 = (unsigned short)45325;
unsigned int var_4 = 963932663U;
short var_6 = (short)3780;
unsigned long long int var_8 = 3868981586818159309ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1185413949U;
short var_14 = (short)-26524;
signed char var_15 = (signed char)3;
signed char var_16 = (signed char)-97;
unsigned int arr_0 [23] ;
unsigned long long int arr_2 [23] ;
unsigned int arr_5 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2341277744U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 17823796011756391352ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1832649633U : 3603289732U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
