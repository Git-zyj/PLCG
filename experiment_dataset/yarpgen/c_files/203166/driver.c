#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = 1895360555;
unsigned int var_5 = 4188739880U;
int var_6 = 1290327372;
short var_7 = (short)-15435;
int zero = 0;
signed char var_15 = (signed char)-39;
long long int var_16 = -7778180499601630399LL;
void init() {
}

void checksum() {
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
