#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9671;
unsigned int var_7 = 1950158711U;
unsigned long long int var_9 = 17334482385434476981ULL;
unsigned int var_10 = 3997442243U;
unsigned char var_14 = (unsigned char)52;
int zero = 0;
signed char var_15 = (signed char)-10;
int var_16 = 470410480;
unsigned char var_17 = (unsigned char)76;
unsigned short var_18 = (unsigned short)16083;
unsigned int var_19 = 4118598069U;
unsigned long long int var_20 = 10947827156966088138ULL;
long long int var_21 = -5120460807522373652LL;
unsigned char arr_8 [18] [18] [18] ;
short arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (short)15524;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
