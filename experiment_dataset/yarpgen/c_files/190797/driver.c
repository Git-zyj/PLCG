#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned long long int var_4 = 15527508213671210920ULL;
unsigned char var_5 = (unsigned char)149;
int var_6 = -1051009758;
unsigned int var_9 = 3578099603U;
signed char var_10 = (signed char)-14;
int var_11 = 349616383;
long long int var_16 = 5605054859450777598LL;
unsigned long long int var_17 = 9331541468552517212ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)71;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 256568847U;
_Bool var_22 = (_Bool)0;
int var_23 = 1905093971;
signed char var_24 = (signed char)-57;
short arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)10212;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
