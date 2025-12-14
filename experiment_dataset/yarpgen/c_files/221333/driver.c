#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 8732131325954256304LL;
int var_6 = -660222560;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 291950490U;
int zero = 0;
unsigned int var_11 = 3050662574U;
unsigned char var_12 = (unsigned char)55;
long long int var_13 = -806406115115856142LL;
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
