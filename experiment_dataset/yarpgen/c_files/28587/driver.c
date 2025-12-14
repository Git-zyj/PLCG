#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38248;
unsigned int var_3 = 3542168694U;
unsigned long long int var_4 = 5715453917185642511ULL;
unsigned long long int var_5 = 5241474162259210177ULL;
short var_9 = (short)-27426;
int zero = 0;
unsigned long long int var_11 = 316192554446194592ULL;
short var_12 = (short)22364;
short var_13 = (short)485;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)53393;
unsigned long long int arr_0 [24] ;
short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3656030617171214115ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)9120;
}

void checksum() {
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
