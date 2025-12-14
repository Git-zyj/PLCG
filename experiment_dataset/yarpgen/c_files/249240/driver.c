#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1812645494;
unsigned char var_9 = (unsigned char)121;
unsigned char var_10 = (unsigned char)79;
long long int var_12 = -2573201272528361066LL;
unsigned long long int var_15 = 11968757281802235354ULL;
int zero = 0;
int var_16 = -228760945;
unsigned int var_17 = 2763403055U;
unsigned int var_18 = 3106081562U;
long long int var_19 = 252497976988623595LL;
long long int arr_9 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -6105577714851184657LL : -5360564856345898933LL;
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
