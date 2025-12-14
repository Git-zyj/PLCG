#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3664;
unsigned int var_2 = 4005554694U;
unsigned int var_4 = 2604440436U;
unsigned int var_13 = 667560850U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = -3464890506725278177LL;
int var_21 = 1806675716;
unsigned char var_22 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
