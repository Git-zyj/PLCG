#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
unsigned short var_5 = (unsigned short)11173;
unsigned short var_6 = (unsigned short)10322;
_Bool var_11 = (_Bool)1;
unsigned int var_18 = 3001220023U;
unsigned int var_19 = 4159559305U;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8191908537139221201LL;
_Bool var_22 = (_Bool)0;
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
