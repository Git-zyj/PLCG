#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6009007140672669205LL;
short var_3 = (short)17056;
long long int var_4 = 9117128022778059615LL;
long long int var_9 = 7526644393657533209LL;
unsigned char var_10 = (unsigned char)19;
unsigned int var_11 = 1178402603U;
signed char var_12 = (signed char)117;
int zero = 0;
unsigned char var_15 = (unsigned char)190;
int var_16 = 966864220;
unsigned char var_17 = (unsigned char)44;
unsigned long long int var_18 = 17374816656864958626ULL;
signed char var_19 = (signed char)-29;
int var_20 = -675481768;
signed char arr_0 [20] ;
_Bool arr_2 [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 12177665234681349396ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
