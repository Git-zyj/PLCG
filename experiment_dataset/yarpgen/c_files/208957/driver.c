#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3886744515345538376LL;
long long int var_5 = 7847467040680915393LL;
unsigned short var_11 = (unsigned short)8861;
int zero = 0;
long long int var_18 = 8265380160523658465LL;
long long int var_19 = -6203643354307738831LL;
_Bool var_20 = (_Bool)1;
int var_21 = 301928643;
long long int var_22 = -3790757114810234944LL;
unsigned long long int var_23 = 7565089182999642068ULL;
signed char var_24 = (signed char)6;
int arr_0 [11] [11] ;
long long int arr_4 [11] ;
unsigned char arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2093286697;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 280296546551257623LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)44;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
