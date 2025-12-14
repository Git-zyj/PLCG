#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned long long int var_1 = 14424051648996337169ULL;
unsigned short var_2 = (unsigned short)19312;
int var_3 = -1744040037;
unsigned short var_4 = (unsigned short)39834;
signed char var_5 = (signed char)39;
unsigned long long int var_6 = 5961547759833421129ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)58;
int zero = 0;
unsigned short var_10 = (unsigned short)16988;
unsigned short var_11 = (unsigned short)47505;
unsigned long long int var_12 = 12703757517538610520ULL;
unsigned long long int var_13 = 14285035649835000389ULL;
unsigned int var_14 = 446287976U;
unsigned long long int var_15 = 6060355675219031113ULL;
unsigned long long int var_16 = 16109036079127066526ULL;
long long int var_17 = 9175624129974495167LL;
short var_18 = (short)23300;
_Bool arr_0 [18] ;
int arr_1 [18] ;
unsigned long long int arr_2 [18] [18] ;
long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -2034875088;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 14649768352179775346ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 8175232026441759815LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
