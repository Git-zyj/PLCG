#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned short var_3 = (unsigned short)26350;
unsigned short var_4 = (unsigned short)16760;
unsigned int var_8 = 2111095092U;
unsigned long long int var_9 = 16904319867492601316ULL;
unsigned long long int var_10 = 17506076353524800431ULL;
signed char var_14 = (signed char)-16;
int zero = 0;
long long int var_18 = 4190641555388776743LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)60248;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
