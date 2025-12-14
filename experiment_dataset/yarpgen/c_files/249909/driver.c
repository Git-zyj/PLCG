#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-19;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned int var_7 = 195669215U;
unsigned short var_10 = (unsigned short)20790;
signed char var_11 = (signed char)-47;
unsigned int var_13 = 2655158803U;
long long int var_14 = -984977372269264015LL;
int zero = 0;
unsigned char var_17 = (unsigned char)148;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)251;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
