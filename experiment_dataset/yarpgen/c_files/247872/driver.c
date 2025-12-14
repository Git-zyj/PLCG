#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2992039725869679815LL;
unsigned long long int var_2 = 602528453594269421ULL;
signed char var_5 = (signed char)35;
short var_6 = (short)32542;
unsigned short var_10 = (unsigned short)51041;
int var_11 = 1674690558;
unsigned long long int var_15 = 8141571749112603008ULL;
int var_16 = 1615311846;
int zero = 0;
unsigned int var_17 = 2742791568U;
signed char var_18 = (signed char)102;
unsigned int var_19 = 2750012076U;
long long int var_20 = 3157012910040479966LL;
int var_21 = -968511652;
unsigned short var_22 = (unsigned short)13935;
unsigned char var_23 = (unsigned char)0;
unsigned long long int var_24 = 14067668258891332426ULL;
int arr_3 [10] [10] ;
unsigned long long int arr_4 [10] [10] [10] [10] ;
unsigned int arr_9 [10] [10] [10] [10] [10] ;
short arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -1806666290;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 2529910043743593848ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 914758921U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)-12912;
}

void checksum() {
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
