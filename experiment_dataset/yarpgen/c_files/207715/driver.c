#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3061291494798198850LL;
long long int var_3 = -4704485269304725050LL;
long long int var_4 = -7731378389509330879LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 16711662364426552160ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8432036092802866997LL;
long long int var_10 = -4442919387987705194LL;
unsigned long long int var_11 = 4418293538602607619ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = -635798965342271102LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3850177015957191904LL;
unsigned long long int arr_0 [20] ;
_Bool arr_1 [20] ;
long long int arr_4 [20] ;
unsigned long long int arr_5 [20] [20] [20] [20] ;
unsigned long long int arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 12821376410691943117ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -2284418424805964436LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 13367722100686520200ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 10030522896252454854ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
