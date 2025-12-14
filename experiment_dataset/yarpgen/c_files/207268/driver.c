#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17264375807969851304ULL;
long long int var_7 = 6308729357009814972LL;
unsigned short var_13 = (unsigned short)3155;
unsigned char var_17 = (unsigned char)186;
int zero = 0;
unsigned char var_19 = (unsigned char)87;
unsigned char var_20 = (unsigned char)240;
long long int var_21 = -665799540615864462LL;
long long int var_22 = -887867033615373998LL;
short var_23 = (short)-9762;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)174;
unsigned int arr_0 [16] ;
signed char arr_2 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2265958259U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)89;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
