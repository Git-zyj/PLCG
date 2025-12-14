#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-124;
_Bool var_4 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)119;
int zero = 0;
signed char var_15 = (signed char)-29;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-29177;
signed char var_18 = (signed char)-62;
unsigned long long int var_19 = 499457649167548821ULL;
unsigned char var_20 = (unsigned char)105;
unsigned int var_21 = 3545015626U;
short var_22 = (short)-30225;
signed char var_23 = (signed char)-71;
short var_24 = (short)-8690;
short arr_3 [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)19829;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 4541656907382153872ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)56831;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
