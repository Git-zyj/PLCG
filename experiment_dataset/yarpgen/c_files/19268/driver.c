#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
int var_1 = 835856213;
_Bool var_2 = (_Bool)0;
int var_4 = -370446685;
short var_5 = (short)15320;
long long int var_6 = -3602092383983171305LL;
int var_8 = 1884884474;
short var_9 = (short)17054;
unsigned char var_10 = (unsigned char)66;
unsigned char var_12 = (unsigned char)206;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)25317;
unsigned char var_16 = (unsigned char)195;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)159;
unsigned char var_19 = (unsigned char)156;
int var_20 = 2083169148;
unsigned char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)120;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
