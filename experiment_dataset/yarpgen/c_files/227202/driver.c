#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
int var_2 = -2093478931;
long long int var_3 = 6204383054948430973LL;
long long int var_6 = 1022715348199152297LL;
unsigned short var_7 = (unsigned short)1265;
unsigned int var_9 = 1307866207U;
signed char var_10 = (signed char)118;
signed char var_11 = (signed char)-10;
unsigned long long int var_12 = 3667535354576981669ULL;
unsigned long long int var_13 = 4441111135122604456ULL;
short var_14 = (short)24900;
long long int var_16 = 1638459225817113534LL;
unsigned int var_17 = 2151871945U;
long long int var_18 = -4879945128385640912LL;
int zero = 0;
short var_19 = (short)-25030;
short var_20 = (short)14124;
unsigned char var_21 = (unsigned char)142;
unsigned long long int var_22 = 8713059524530826968ULL;
unsigned char var_23 = (unsigned char)15;
unsigned short arr_1 [24] ;
short arr_2 [24] [24] [24] ;
unsigned short arr_3 [24] [24] [24] ;
unsigned long long int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)19843;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-3387;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)30124;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 11130025130504699328ULL;
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
