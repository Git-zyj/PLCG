#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5242134626396668531LL;
int var_2 = 966344162;
short var_8 = (short)22507;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-93;
unsigned long long int var_13 = 2480601455313169171ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)32795;
short var_20 = (short)-31949;
unsigned short var_21 = (unsigned short)57065;
long long int var_22 = 6645184098027471207LL;
unsigned long long int var_23 = 4854823152450344256ULL;
signed char var_24 = (signed char)81;
unsigned short arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)54793;
}

void checksum() {
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
