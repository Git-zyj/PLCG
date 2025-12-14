#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7009925696813102781LL;
unsigned int var_7 = 3358026743U;
unsigned char var_8 = (unsigned char)67;
short var_10 = (short)-24314;
int var_12 = -1351019869;
int zero = 0;
int var_20 = 264565148;
signed char var_21 = (signed char)-92;
unsigned char var_22 = (unsigned char)83;
unsigned int var_23 = 2979082006U;
signed char var_24 = (signed char)-72;
unsigned int var_25 = 4209978749U;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
short var_29 = (short)7719;
long long int var_30 = -4845192495979404340LL;
int var_31 = 1189449843;
int arr_1 [19] ;
unsigned short arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1589073420;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)46141;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
