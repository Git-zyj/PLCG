#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)6601;
unsigned long long int var_5 = 17969717966242491608ULL;
unsigned long long int var_6 = 98551661956109847ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 579985672U;
int zero = 0;
unsigned short var_11 = (unsigned short)4835;
unsigned short var_12 = (unsigned short)49285;
unsigned long long int var_13 = 3411907059736506940ULL;
void init() {
}

void checksum() {
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
