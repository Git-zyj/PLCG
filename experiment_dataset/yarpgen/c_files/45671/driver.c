#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1592900753;
signed char var_3 = (signed char)-77;
unsigned short var_4 = (unsigned short)42068;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)41;
long long int var_9 = 7387333610787165168LL;
int zero = 0;
unsigned long long int var_11 = 13326870647913487633ULL;
signed char var_12 = (signed char)110;
unsigned char var_13 = (unsigned char)95;
unsigned long long int var_14 = 5501564536759604710ULL;
unsigned short var_15 = (unsigned short)15523;
unsigned char var_16 = (unsigned char)184;
int arr_2 [25] ;
unsigned int arr_4 [25] ;
_Bool arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -612652876 : 658863839;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 911108542U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
