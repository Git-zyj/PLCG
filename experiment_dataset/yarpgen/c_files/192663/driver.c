#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
int var_1 = -1601214003;
unsigned long long int var_2 = 14327405393339162961ULL;
unsigned long long int var_3 = 5133276055017157115ULL;
unsigned long long int var_5 = 6809330557787959070ULL;
unsigned short var_6 = (unsigned short)5354;
int var_7 = -899243218;
unsigned char var_9 = (unsigned char)10;
unsigned short var_13 = (unsigned short)55961;
unsigned short var_16 = (unsigned short)38184;
int zero = 0;
short var_18 = (short)3605;
unsigned short var_19 = (unsigned short)7927;
unsigned int var_20 = 609177448U;
signed char var_21 = (signed char)-41;
short arr_2 [17] ;
unsigned char arr_3 [17] [17] ;
long long int arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-45;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 101991209952358443LL;
}

void checksum() {
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
