#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4361661108388230410ULL;
short var_7 = (short)1824;
unsigned char var_9 = (unsigned char)133;
long long int var_10 = 5442621100694507965LL;
short var_11 = (short)10241;
signed char var_13 = (signed char)-126;
unsigned char var_15 = (unsigned char)71;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)14869;
unsigned char var_20 = (unsigned char)39;
unsigned char var_21 = (unsigned char)5;
unsigned char var_22 = (unsigned char)212;
signed char var_23 = (signed char)-28;
unsigned char arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)240;
}

void checksum() {
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
