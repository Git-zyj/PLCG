#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3378067623240168605LL;
signed char var_1 = (signed char)65;
unsigned int var_4 = 853115923U;
unsigned int var_6 = 1267571516U;
long long int var_12 = 7194198124390175987LL;
int zero = 0;
long long int var_13 = 8847988010416179735LL;
int var_14 = -618153858;
unsigned short var_15 = (unsigned short)40273;
unsigned int var_16 = 3454522295U;
signed char var_17 = (signed char)14;
unsigned long long int var_18 = 8813135155126362583ULL;
signed char arr_3 [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)70 : (signed char)119;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 7612066759122432794ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
