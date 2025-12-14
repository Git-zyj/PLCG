#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9000944027683387146ULL;
unsigned long long int var_3 = 421776553973391125ULL;
int var_4 = -1629437697;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)77;
unsigned long long int var_12 = 9501199541914820783ULL;
signed char var_14 = (signed char)20;
unsigned short var_16 = (unsigned short)35681;
unsigned char var_18 = (unsigned char)166;
int zero = 0;
unsigned int var_19 = 1691287010U;
signed char var_20 = (signed char)-117;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-90;
unsigned char var_23 = (unsigned char)184;
signed char var_24 = (signed char)77;
signed char var_25 = (signed char)21;
signed char arr_9 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)68;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
