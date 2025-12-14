#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
long long int var_2 = -3806188496867357533LL;
long long int var_3 = 8173062785342328948LL;
short var_4 = (short)947;
long long int var_8 = -5653734990089990603LL;
signed char var_10 = (signed char)45;
signed char var_12 = (signed char)111;
long long int var_13 = 41632578533122152LL;
signed char var_15 = (signed char)57;
int zero = 0;
short var_16 = (short)812;
short var_17 = (short)-32618;
long long int var_18 = 272320908438556987LL;
long long int var_19 = 1821659741223008742LL;
long long int var_20 = -3069759410953279328LL;
signed char arr_1 [22] ;
long long int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -129725110161348402LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
