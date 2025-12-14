#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2238645920393103928ULL;
unsigned short var_5 = (unsigned short)32574;
long long int var_6 = -7575015718382938058LL;
unsigned char var_9 = (unsigned char)212;
signed char var_12 = (signed char)29;
int zero = 0;
long long int var_19 = -6612652386226836787LL;
unsigned char var_20 = (unsigned char)116;
unsigned long long int arr_0 [12] ;
short arr_3 [12] ;
signed char arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17049012822013944149ULL : 15106680905817842685ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)17400;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)49 : (signed char)94;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
