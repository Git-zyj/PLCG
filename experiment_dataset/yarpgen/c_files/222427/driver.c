#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-104;
signed char var_3 = (signed char)124;
unsigned int var_5 = 3418982019U;
short var_9 = (short)23311;
int var_12 = -164458928;
signed char var_13 = (signed char)-94;
short var_14 = (short)-27791;
long long int var_15 = -4730365574823350136LL;
int zero = 0;
signed char var_16 = (signed char)123;
signed char var_17 = (signed char)-71;
long long int var_18 = 5131498933815961216LL;
unsigned int var_19 = 3187745506U;
unsigned int var_20 = 1495483431U;
signed char arr_0 [12] [12] ;
int arr_3 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1878072981;
}

void checksum() {
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
