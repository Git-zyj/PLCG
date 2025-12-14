#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-43;
unsigned short var_4 = (unsigned short)41872;
unsigned long long int var_5 = 17994829695761144654ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -5936183437717403598LL;
unsigned long long int var_14 = 3203962277345178958ULL;
signed char var_15 = (signed char)-106;
int zero = 0;
signed char var_16 = (signed char)-45;
signed char var_17 = (signed char)37;
long long int var_18 = 8249304306390308352LL;
unsigned short var_19 = (unsigned short)60132;
unsigned short arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)51002;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
