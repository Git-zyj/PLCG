#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1792339258;
unsigned short var_3 = (unsigned short)49690;
unsigned short var_5 = (unsigned short)29778;
unsigned short var_6 = (unsigned short)23136;
long long int var_14 = -3218230967951369031LL;
unsigned int var_17 = 1784530489U;
int zero = 0;
unsigned long long int var_19 = 12289060658039251701ULL;
unsigned char var_20 = (unsigned char)57;
long long int var_21 = -5042685839954278066LL;
short var_22 = (short)13599;
signed char var_23 = (signed char)74;
long long int var_24 = -4143942417921427990LL;
signed char arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)73;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
