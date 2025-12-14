#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 1382551023078795882LL;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = 5052157811195037664LL;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)29692;
int zero = 0;
signed char var_13 = (signed char)27;
unsigned int var_14 = 4024321965U;
long long int var_15 = -2447772302275159728LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 5819683958832505295LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
