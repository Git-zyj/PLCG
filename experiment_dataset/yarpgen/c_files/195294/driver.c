#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4432008814298935748ULL;
unsigned long long int var_8 = 13702632823802724966ULL;
int var_9 = 828153908;
int zero = 0;
unsigned long long int var_17 = 3192374157248401378ULL;
int var_18 = -1598741658;
unsigned short var_19 = (unsigned short)58753;
_Bool var_20 = (_Bool)0;
unsigned short arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)9916;
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
