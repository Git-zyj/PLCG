#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
long long int var_3 = -3415260332720681335LL;
unsigned short var_7 = (unsigned short)7178;
unsigned int var_9 = 3139596618U;
long long int var_10 = -3797721876387730846LL;
unsigned int var_13 = 3783765157U;
signed char var_14 = (signed char)-10;
int zero = 0;
long long int var_16 = -8721977375316013190LL;
unsigned int var_17 = 3205873309U;
unsigned short var_18 = (unsigned short)36857;
int var_19 = 1497255904;
signed char arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)60;
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
