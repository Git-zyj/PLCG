#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2938174710U;
long long int var_5 = -7718895530108815617LL;
unsigned short var_9 = (unsigned short)19185;
long long int var_10 = 6841768872151872102LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-77;
unsigned char var_19 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
