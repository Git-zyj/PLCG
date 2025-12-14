#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 864278878U;
unsigned long long int var_2 = 12348745073747259159ULL;
int var_3 = 119890372;
unsigned short var_4 = (unsigned short)57465;
short var_8 = (short)32639;
unsigned char var_9 = (unsigned char)182;
short var_10 = (short)-22101;
unsigned short var_11 = (unsigned short)59420;
unsigned short var_13 = (unsigned short)31286;
unsigned char var_15 = (unsigned char)241;
int zero = 0;
unsigned char var_16 = (unsigned char)220;
int var_17 = 1399789275;
int var_18 = -1765914308;
int var_19 = 1883191543;
unsigned short var_20 = (unsigned short)9944;
unsigned int var_21 = 159661352U;
unsigned char var_22 = (unsigned char)167;
signed char arr_0 [20] [20] ;
int arr_1 [20] [20] ;
unsigned char arr_2 [20] ;
unsigned int arr_3 [20] [20] [20] ;
unsigned long long int arr_6 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-112 : (signed char)89;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 538028711;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 548465584U : 1644512049U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 16655523024022533789ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
