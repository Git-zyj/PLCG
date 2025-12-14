#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7616828414980626831LL;
long long int var_2 = 7134556017555636876LL;
unsigned int var_3 = 4277490701U;
unsigned short var_8 = (unsigned short)53853;
signed char var_9 = (signed char)13;
int var_10 = 333182127;
short var_11 = (short)15042;
long long int var_12 = 8636860659019385114LL;
signed char var_13 = (signed char)-17;
unsigned int var_14 = 495614799U;
int zero = 0;
unsigned short var_16 = (unsigned short)19680;
unsigned long long int var_17 = 2095215527735256131ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)34;
unsigned int var_20 = 3738924903U;
unsigned int var_21 = 2673714468U;
int arr_1 [20] [20] ;
int arr_4 [20] [20] ;
signed char arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -1155050925 : -1301465998;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1078397232 : -736668364;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)72 : (signed char)127;
}

void checksum() {
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
