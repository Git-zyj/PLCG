#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7175247796433839336ULL;
unsigned long long int var_2 = 10088394551893124966ULL;
int var_3 = -974895549;
int var_4 = -1821507700;
int var_8 = -320429319;
int var_9 = -1304353842;
int zero = 0;
unsigned short var_12 = (unsigned short)51600;
signed char var_13 = (signed char)-31;
unsigned char var_14 = (unsigned char)121;
long long int var_15 = -953287166057058642LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)117;
unsigned short arr_2 [12] ;
_Bool arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)10357;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
