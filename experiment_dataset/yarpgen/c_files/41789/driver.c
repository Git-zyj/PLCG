#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
unsigned int var_2 = 3322231493U;
long long int var_6 = -8775928098357846531LL;
signed char var_7 = (signed char)-126;
unsigned short var_8 = (unsigned short)44702;
signed char var_9 = (signed char)116;
unsigned int var_13 = 3778472299U;
long long int var_14 = 4705882761570560013LL;
int zero = 0;
int var_15 = 831430660;
signed char var_16 = (signed char)-118;
short var_17 = (short)17741;
long long int var_18 = 8985094181123460854LL;
unsigned char var_19 = (unsigned char)46;
signed char var_20 = (signed char)-112;
unsigned short var_21 = (unsigned short)11935;
short var_22 = (short)12546;
long long int arr_2 [17] [17] ;
unsigned int arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -8093023010068277909LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1456038176U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
