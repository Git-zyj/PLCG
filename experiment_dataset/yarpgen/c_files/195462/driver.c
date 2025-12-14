#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-50;
signed char var_8 = (signed char)90;
unsigned char var_9 = (unsigned char)208;
unsigned int var_11 = 598726578U;
int zero = 0;
unsigned long long int var_15 = 6989256936171978004ULL;
long long int var_16 = 2927683407764532848LL;
unsigned long long int var_17 = 6734524361239265913ULL;
unsigned char var_18 = (unsigned char)26;
short var_19 = (short)-18192;
unsigned long long int var_20 = 15134800729119123082ULL;
short var_21 = (short)31698;
unsigned long long int arr_7 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 5401474962585443667ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
