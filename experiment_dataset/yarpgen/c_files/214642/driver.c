#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56827;
long long int var_3 = 8640759525888632402LL;
signed char var_5 = (signed char)-1;
_Bool var_10 = (_Bool)0;
int var_12 = 55850632;
signed char var_14 = (signed char)114;
int zero = 0;
unsigned short var_16 = (unsigned short)23644;
unsigned char var_17 = (unsigned char)208;
int var_18 = 900211769;
void init() {
}

void checksum() {
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
