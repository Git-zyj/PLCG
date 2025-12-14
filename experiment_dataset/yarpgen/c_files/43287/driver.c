#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 1994571670546233388LL;
int var_4 = -931198758;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_7 = -8598196739070676254LL;
unsigned int var_8 = 2288983463U;
int zero = 0;
long long int var_12 = -7568842536387468634LL;
long long int var_13 = -5630234989576762769LL;
signed char var_14 = (signed char)85;
unsigned char var_15 = (unsigned char)226;
unsigned short var_16 = (unsigned short)20467;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
