#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)153;
long long int var_3 = -7115146102756450700LL;
unsigned int var_5 = 810044880U;
unsigned char var_8 = (unsigned char)35;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)34;
int zero = 0;
unsigned int var_11 = 2574643196U;
int var_12 = 927568663;
long long int var_13 = -8911200612577647768LL;
unsigned int var_14 = 3999728325U;
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
