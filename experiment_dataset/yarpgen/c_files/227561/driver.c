#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10090028389317903069ULL;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)94;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 843175824U;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)216;
int zero = 0;
int var_14 = -171245850;
unsigned short var_15 = (unsigned short)36570;
long long int var_16 = -7813258080467585562LL;
unsigned short var_17 = (unsigned short)25614;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
