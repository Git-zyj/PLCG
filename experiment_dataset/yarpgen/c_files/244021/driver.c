#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
int var_2 = -291448628;
unsigned int var_4 = 3475456975U;
signed char var_5 = (signed char)124;
short var_6 = (short)-19522;
unsigned char var_8 = (unsigned char)26;
unsigned short var_9 = (unsigned short)10663;
_Bool var_10 = (_Bool)1;
long long int var_13 = -810863583904592541LL;
int var_15 = 1761998162;
int zero = 0;
long long int var_17 = -9027290254003165018LL;
unsigned char var_18 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
