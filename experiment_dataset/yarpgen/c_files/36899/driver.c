#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 871150760U;
unsigned short var_4 = (unsigned short)23399;
unsigned int var_5 = 248735483U;
unsigned int var_7 = 4016334293U;
long long int var_8 = 3184753053297950333LL;
unsigned int var_9 = 192706953U;
unsigned char var_10 = (unsigned char)209;
unsigned int var_12 = 3464066643U;
long long int var_15 = 2204006258622052893LL;
int zero = 0;
long long int var_19 = 8577049820293178036LL;
unsigned int var_20 = 4011386133U;
unsigned char var_21 = (unsigned char)116;
unsigned char var_22 = (unsigned char)139;
unsigned int var_23 = 2388074049U;
unsigned char var_24 = (unsigned char)55;
unsigned int var_25 = 2824116594U;
unsigned short var_26 = (unsigned short)57929;
unsigned int arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
long long int arr_4 [15] ;
unsigned char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 3184787758U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -4980309655710679473LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)180;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
