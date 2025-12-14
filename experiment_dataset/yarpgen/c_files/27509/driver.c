#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -5002506;
unsigned char var_7 = (unsigned char)169;
unsigned short var_9 = (unsigned short)20415;
unsigned long long int var_14 = 11703082616157187082ULL;
int zero = 0;
unsigned long long int var_18 = 15545657619818791607ULL;
unsigned long long int var_19 = 16037846955861330221ULL;
unsigned long long int var_20 = 9165654374329749052ULL;
long long int var_21 = -1328205695658818476LL;
int arr_5 [17] [17] [17] ;
unsigned int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 280097691;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 8506504U : 2980005307U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
