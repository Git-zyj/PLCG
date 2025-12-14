#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2145196195;
long long int var_4 = 4177635998698670516LL;
_Bool var_7 = (_Bool)1;
int var_9 = 1580166481;
unsigned long long int var_12 = 48513329950903961ULL;
signed char var_13 = (signed char)-1;
int zero = 0;
unsigned long long int var_15 = 7846766959164264445ULL;
unsigned short var_16 = (unsigned short)12256;
unsigned short var_17 = (unsigned short)48398;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
