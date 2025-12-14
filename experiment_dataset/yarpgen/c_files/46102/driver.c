#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20041;
unsigned int var_5 = 3531319436U;
unsigned char var_7 = (unsigned char)255;
unsigned short var_9 = (unsigned short)17293;
signed char var_10 = (signed char)26;
signed char var_12 = (signed char)1;
int zero = 0;
int var_17 = -254917910;
int var_18 = 531029556;
unsigned int var_19 = 4034225681U;
unsigned char var_20 = (unsigned char)121;
unsigned short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)57104;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
