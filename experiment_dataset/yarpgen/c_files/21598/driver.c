#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6497417543366646074ULL;
short var_3 = (short)-19974;
signed char var_4 = (signed char)-99;
signed char var_6 = (signed char)-102;
int var_7 = -1543213538;
long long int var_9 = -2609447574420167749LL;
unsigned long long int var_11 = 13822778275068327704ULL;
int var_12 = -1328628201;
signed char var_13 = (signed char)-125;
signed char var_16 = (signed char)-44;
unsigned short var_17 = (unsigned short)8725;
int zero = 0;
long long int var_19 = -1290927254425473651LL;
long long int var_20 = -2688675715729550459LL;
unsigned int var_21 = 1826813814U;
unsigned short var_22 = (unsigned short)6396;
short arr_3 [18] ;
signed char arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-22713;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)82;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
