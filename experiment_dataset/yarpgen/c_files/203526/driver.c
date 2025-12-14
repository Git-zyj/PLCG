#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned long long int var_3 = 12704332747919385670ULL;
unsigned int var_4 = 2162219577U;
long long int var_6 = 4510032783774934092LL;
unsigned long long int var_8 = 4168299614318770073ULL;
unsigned char var_9 = (unsigned char)187;
unsigned int var_11 = 1099346852U;
unsigned long long int var_12 = 8573449107306295101ULL;
int zero = 0;
int var_13 = 842996180;
long long int var_14 = -4757142023423938438LL;
unsigned char var_15 = (unsigned char)182;
signed char var_16 = (signed char)84;
unsigned char var_17 = (unsigned char)255;
unsigned int var_18 = 1974867466U;
unsigned short var_19 = (unsigned short)40029;
unsigned char arr_3 [20] ;
int arr_5 [20] [20] [20] [20] ;
long long int arr_6 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -547486768;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1076199801807065162LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
