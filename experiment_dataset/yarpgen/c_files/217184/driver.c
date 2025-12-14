#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 8331809478850199792ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 5158757099156888067ULL;
unsigned int var_9 = 2240170844U;
signed char var_10 = (signed char)-51;
int zero = 0;
unsigned int var_14 = 3952873881U;
unsigned short var_15 = (unsigned short)5632;
short var_16 = (short)13869;
signed char var_17 = (signed char)-111;
unsigned short var_18 = (unsigned short)36006;
int arr_5 [12] [12] [12] ;
unsigned int arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -216496723;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 3814602887U;
}

void checksum() {
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
