#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13717483370567553873ULL;
unsigned char var_3 = (unsigned char)130;
signed char var_5 = (signed char)-126;
long long int var_6 = 735570747240257428LL;
int var_7 = 1832116168;
signed char var_8 = (signed char)-38;
unsigned short var_9 = (unsigned short)41695;
int zero = 0;
unsigned char var_10 = (unsigned char)197;
short var_11 = (short)-7479;
signed char var_12 = (signed char)101;
unsigned int var_13 = 4223755923U;
int var_14 = 1616977428;
unsigned short arr_5 [17] ;
unsigned long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)3225;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 11490070704241311770ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
