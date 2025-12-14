#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1188983464280816270LL;
unsigned char var_2 = (unsigned char)221;
unsigned int var_4 = 472702451U;
int var_5 = 1175891727;
unsigned int var_6 = 1146140122U;
unsigned int var_7 = 2554530350U;
unsigned int var_8 = 1573903736U;
int zero = 0;
long long int var_10 = -4579594431962568596LL;
long long int var_11 = 2984358263010658007LL;
long long int var_12 = -946328051920311419LL;
unsigned char var_13 = (unsigned char)132;
unsigned char arr_0 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
