#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3231520122U;
unsigned int var_1 = 3262447138U;
long long int var_2 = -2639932536778261830LL;
long long int var_3 = 4138360372088444272LL;
signed char var_4 = (signed char)16;
signed char var_6 = (signed char)39;
int var_7 = 506735792;
long long int var_8 = -726255176160233969LL;
long long int var_9 = -6713081720834445097LL;
int zero = 0;
int var_10 = 332903056;
unsigned char var_11 = (unsigned char)212;
unsigned long long int var_12 = 12579982061948878058ULL;
int var_13 = -1568530311;
unsigned short var_14 = (unsigned short)31152;
unsigned int var_15 = 601836009U;
signed char arr_1 [23] ;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)-118;
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
