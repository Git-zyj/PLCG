#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1920982214944425630LL;
long long int var_8 = -6656086161709524691LL;
unsigned int var_9 = 2966417863U;
unsigned int var_14 = 1759499334U;
long long int var_15 = -4032221966312821121LL;
unsigned int var_16 = 1531038124U;
unsigned int var_18 = 12016325U;
int zero = 0;
long long int var_19 = 3356362346526260589LL;
long long int var_20 = 7515432018450018099LL;
long long int var_21 = -7745543688208349679LL;
long long int var_22 = -3805913441987960648LL;
long long int var_23 = 8921519772008503585LL;
unsigned int arr_2 [17] [17] [17] ;
long long int arr_3 [17] [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1570256041U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1598432199273090346LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 5325428062217272937LL;
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
