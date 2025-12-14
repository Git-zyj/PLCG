#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 47153793U;
unsigned int var_2 = 2725384613U;
short var_4 = (short)27092;
signed char var_6 = (signed char)-44;
unsigned int var_7 = 2329662365U;
signed char var_8 = (signed char)85;
unsigned char var_9 = (unsigned char)238;
unsigned int var_10 = 3943656478U;
unsigned int var_11 = 1374484406U;
int zero = 0;
unsigned short var_12 = (unsigned short)19421;
unsigned char var_13 = (unsigned char)192;
unsigned long long int var_14 = 8578927484190676877ULL;
unsigned int var_15 = 4167957954U;
unsigned long long int var_16 = 1286818043313044276ULL;
unsigned char var_17 = (unsigned char)181;
unsigned char arr_3 [21] [21] ;
signed char arr_4 [21] [21] [21] ;
unsigned short arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)226 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)89 : (signed char)50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)4721 : (unsigned short)25371;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
