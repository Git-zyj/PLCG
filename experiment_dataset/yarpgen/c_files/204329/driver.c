#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1266230U;
short var_4 = (short)22514;
int var_6 = -1509954702;
signed char var_7 = (signed char)-63;
long long int var_12 = 5549692030814055116LL;
int var_13 = 42231196;
int zero = 0;
unsigned int var_14 = 874136633U;
signed char var_15 = (signed char)85;
long long int var_16 = -972943152796450869LL;
long long int var_17 = -3387669385492984190LL;
unsigned long long int var_18 = 7154575551374284949ULL;
short var_19 = (short)-15368;
long long int var_20 = 1484812145305779628LL;
_Bool arr_1 [18] ;
unsigned long long int arr_3 [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 10365146604281917003ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 9161452664700369303ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
