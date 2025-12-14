#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)57964;
signed char var_3 = (signed char)-36;
unsigned char var_4 = (unsigned char)77;
unsigned char var_5 = (unsigned char)135;
long long int var_7 = 5354504689805316776LL;
unsigned short var_8 = (unsigned short)17092;
unsigned int var_9 = 1268590747U;
unsigned char var_10 = (unsigned char)62;
unsigned char var_11 = (unsigned char)226;
int zero = 0;
unsigned int var_16 = 1014380856U;
unsigned char var_17 = (unsigned char)200;
short var_18 = (short)-26456;
unsigned int var_19 = 3426920546U;
short var_20 = (short)-3415;
unsigned short var_21 = (unsigned short)6056;
long long int var_22 = 3859633742930751936LL;
long long int var_23 = 7517288874119774083LL;
unsigned long long int arr_11 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2766135185283472061ULL : 7419124603755314758ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
