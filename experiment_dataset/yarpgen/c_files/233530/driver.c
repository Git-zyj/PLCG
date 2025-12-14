#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
short var_2 = (short)19935;
int var_3 = -595108632;
short var_4 = (short)21556;
unsigned short var_6 = (unsigned short)2623;
int zero = 0;
unsigned long long int var_10 = 5177558222199337806ULL;
short var_11 = (short)-25166;
unsigned int var_12 = 541479200U;
signed char var_13 = (signed char)-66;
long long int var_14 = 2395531974710792974LL;
signed char var_15 = (signed char)14;
unsigned long long int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1634678851032630463ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
