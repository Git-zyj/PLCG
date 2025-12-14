#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5867641451695329826LL;
unsigned long long int var_1 = 7220473073345694665ULL;
unsigned char var_2 = (unsigned char)20;
long long int var_4 = -7148370368860932044LL;
unsigned short var_5 = (unsigned short)52979;
_Bool var_7 = (_Bool)1;
long long int var_9 = -3650840906894239440LL;
_Bool var_10 = (_Bool)0;
long long int var_12 = 5782266589149321580LL;
unsigned short var_13 = (unsigned short)5823;
unsigned long long int var_14 = 6433665440663901234ULL;
unsigned short var_16 = (unsigned short)61793;
int zero = 0;
unsigned char var_17 = (unsigned char)228;
int var_18 = -284401443;
int var_19 = -269262648;
unsigned short var_20 = (unsigned short)58636;
unsigned int var_21 = 472781385U;
long long int var_22 = 177445224838158146LL;
long long int var_23 = 3078529583668159798LL;
unsigned int var_24 = 3521901081U;
long long int var_25 = -6197483325407197796LL;
unsigned int var_26 = 266634860U;
unsigned long long int arr_0 [21] ;
long long int arr_1 [21] [21] ;
unsigned short arr_2 [21] ;
unsigned short arr_3 [21] ;
long long int arr_5 [21] ;
unsigned int arr_7 [21] ;
unsigned short arr_8 [21] [21] ;
unsigned int arr_9 [21] [21] ;
unsigned char arr_11 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 12273243067118306164ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 3005011824712457824LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)40878;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)35006;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -1014633076414142868LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2341757289U : 2082817301U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)24703 : (unsigned short)52713;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 3364936678U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)116;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
