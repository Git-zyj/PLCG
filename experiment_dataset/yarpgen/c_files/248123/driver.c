#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23068;
long long int var_6 = 6459104439550136247LL;
long long int var_7 = -473472294384297956LL;
unsigned char var_8 = (unsigned char)110;
unsigned int var_9 = 4134768102U;
int zero = 0;
short var_19 = (short)-4999;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3019874068U;
short var_22 = (short)9595;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
