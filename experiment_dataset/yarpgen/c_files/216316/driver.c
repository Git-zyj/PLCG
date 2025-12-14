#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
short var_2 = (short)-7892;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-111;
unsigned char var_6 = (unsigned char)125;
_Bool var_9 = (_Bool)0;
short var_11 = (short)5058;
short var_12 = (short)-6218;
int var_17 = -1773377666;
int zero = 0;
unsigned char var_18 = (unsigned char)51;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2736248363U;
short var_22 = (short)-10432;
unsigned char arr_1 [22] ;
unsigned char arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)25;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
