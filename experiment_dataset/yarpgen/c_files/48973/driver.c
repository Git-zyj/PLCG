#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4961345209480447063LL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)217;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)4749;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)50706;
unsigned char var_12 = (unsigned char)150;
int zero = 0;
long long int var_13 = 4582357920799194172LL;
unsigned int var_14 = 3199234823U;
void init() {
}

void checksum() {
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
