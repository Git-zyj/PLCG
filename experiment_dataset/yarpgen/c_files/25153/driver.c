#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9797690285007768491ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)15392;
int var_19 = -1976857732;
signed char var_20 = (signed char)-63;
unsigned long long int var_21 = 1619081633038152683ULL;
unsigned char var_22 = (unsigned char)116;
long long int arr_0 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 6941511565710912214LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
