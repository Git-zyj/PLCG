#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)96;
unsigned long long int var_3 = 14710074286700853398ULL;
unsigned long long int var_4 = 8150251597256723886ULL;
signed char var_6 = (signed char)-39;
signed char var_7 = (signed char)105;
_Bool var_8 = (_Bool)0;
long long int var_9 = 6011152875076285235LL;
unsigned short var_10 = (unsigned short)28982;
unsigned int var_11 = 2021388096U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)17185;
int zero = 0;
unsigned long long int var_14 = 7156917648334393688ULL;
unsigned char var_15 = (unsigned char)218;
signed char var_16 = (signed char)-63;
long long int var_17 = -8779186634845154446LL;
unsigned char var_18 = (unsigned char)77;
long long int var_19 = -5959535215649067773LL;
signed char var_20 = (signed char)106;
int var_21 = -1823639282;
unsigned long long int var_22 = 13750890046448137051ULL;
short var_23 = (short)3681;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_3 [19] ;
long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 11904875766882295866ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 18321638631608892722ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -3645457552158962786LL;
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
