#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1434899765;
unsigned long long int var_1 = 12536665334682332238ULL;
unsigned long long int var_5 = 5962736952124013806ULL;
short var_9 = (short)23442;
short var_12 = (short)11257;
short var_13 = (short)2636;
unsigned int var_15 = 1328953814U;
int zero = 0;
unsigned long long int var_17 = 13209526953811424661ULL;
short var_18 = (short)32326;
int var_19 = -1086730082;
signed char var_20 = (signed char)-52;
signed char var_21 = (signed char)98;
unsigned short arr_0 [14] ;
short arr_1 [14] ;
signed char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)61999;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)24131;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)82;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
