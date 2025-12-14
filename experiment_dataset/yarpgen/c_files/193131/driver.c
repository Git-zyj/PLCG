#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16241255230848232508ULL;
unsigned long long int var_1 = 15945090428633714088ULL;
unsigned long long int var_2 = 270775300040750390ULL;
unsigned short var_5 = (unsigned short)47992;
unsigned char var_12 = (unsigned char)55;
unsigned int var_13 = 1417444777U;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1145380542;
int var_16 = -1174303461;
unsigned long long int var_17 = 1879256059778843925ULL;
unsigned int var_18 = 4282071115U;
short var_19 = (short)-29487;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2051721434840692613LL;
unsigned char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)59 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3343970270948869186ULL : 7586670526220796310ULL;
}

void checksum() {
    hash(&seed, var_14);
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
