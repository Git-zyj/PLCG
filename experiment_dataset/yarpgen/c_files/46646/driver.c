#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3764281716U;
unsigned short var_2 = (unsigned short)25017;
signed char var_4 = (signed char)-82;
unsigned long long int var_11 = 4864037432640379563ULL;
int zero = 0;
unsigned long long int var_15 = 10178850616264055090ULL;
unsigned short var_16 = (unsigned short)64023;
unsigned short var_17 = (unsigned short)1258;
unsigned short var_18 = (unsigned short)29215;
signed char arr_0 [17] [17] ;
unsigned short arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)26173;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
