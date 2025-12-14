#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10852061695936212784ULL;
signed char var_4 = (signed char)127;
unsigned short var_10 = (unsigned short)27175;
unsigned short var_13 = (unsigned short)58708;
long long int var_17 = 2989033932583541027LL;
unsigned int var_19 = 2102794947U;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)31698;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
