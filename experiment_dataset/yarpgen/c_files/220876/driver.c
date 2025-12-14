#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1806616569;
unsigned long long int var_10 = 14642164933283553680ULL;
unsigned int var_12 = 15268503U;
int zero = 0;
unsigned long long int var_16 = 465086765099325208ULL;
int var_17 = 928667478;
int var_18 = -2069478317;
unsigned long long int var_19 = 4856679809527082407ULL;
long long int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -6458405927263730923LL : -1176159532580871290LL;
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
