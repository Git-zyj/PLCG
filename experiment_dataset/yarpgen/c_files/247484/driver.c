#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5815005207118659686LL;
unsigned char var_7 = (unsigned char)148;
long long int var_11 = 7089993362753541687LL;
long long int var_12 = 695152252467079591LL;
unsigned char var_13 = (unsigned char)7;
short var_14 = (short)24762;
int var_16 = 1422247492;
int zero = 0;
unsigned int var_19 = 352772038U;
int var_20 = -1087228501;
unsigned char var_21 = (unsigned char)214;
int var_22 = 1566787591;
unsigned short var_23 = (unsigned short)25567;
long long int arr_0 [20] ;
int arr_1 [20] ;
short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 5497730824055912567LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1170088961;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)15844;
}

void checksum() {
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
