#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 758327054;
short var_4 = (short)-13603;
signed char var_5 = (signed char)-60;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)60417;
int zero = 0;
unsigned long long int var_11 = 3064245526292047413ULL;
unsigned short var_12 = (unsigned short)61016;
signed char var_13 = (signed char)-73;
long long int var_14 = 5607999043333559079LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
