#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)32;
int var_3 = -968131087;
long long int var_5 = 4085108748729083283LL;
unsigned long long int var_6 = 1718277945653819492ULL;
unsigned char var_7 = (unsigned char)45;
unsigned short var_8 = (unsigned short)10903;
short var_9 = (short)19010;
unsigned char var_11 = (unsigned char)17;
short var_12 = (short)-29272;
short var_14 = (short)-23998;
int zero = 0;
long long int var_15 = -5026529049569169632LL;
unsigned short var_16 = (unsigned short)9437;
signed char var_17 = (signed char)11;
long long int var_18 = -5490749209422573244LL;
short var_19 = (short)-28892;
short var_20 = (short)8402;
int var_21 = -2047679293;
signed char var_22 = (signed char)66;
unsigned char var_23 = (unsigned char)247;
unsigned long long int var_24 = 18333628452483101685ULL;
unsigned int var_25 = 2873455845U;
int var_26 = 894013414;
unsigned char arr_2 [17] ;
short arr_5 [17] ;
int arr_10 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)8059 : (short)18019;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2007639848;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
