#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43156;
unsigned char var_2 = (unsigned char)186;
unsigned char var_3 = (unsigned char)156;
long long int var_6 = -6534712308650846179LL;
signed char var_8 = (signed char)-93;
int zero = 0;
unsigned long long int var_10 = 5365995497162055156ULL;
unsigned long long int var_11 = 15898568550410687045ULL;
int var_12 = 57041255;
unsigned char var_13 = (unsigned char)47;
short var_14 = (short)18096;
unsigned int var_15 = 3286406091U;
short var_16 = (short)10732;
signed char arr_3 [13] ;
unsigned long long int arr_6 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 15021802504432087768ULL;
}

void checksum() {
    hash(&seed, var_10);
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
