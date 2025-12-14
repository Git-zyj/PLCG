#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3048200443U;
unsigned char var_4 = (unsigned char)37;
unsigned char var_6 = (unsigned char)89;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 3458854142U;
unsigned int var_16 = 3903709017U;
int zero = 0;
unsigned char var_17 = (unsigned char)181;
long long int var_18 = 2248137242369571780LL;
long long int var_19 = -9185521492435134136LL;
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
