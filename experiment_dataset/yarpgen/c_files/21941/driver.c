#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
unsigned char var_2 = (unsigned char)190;
unsigned char var_6 = (unsigned char)43;
signed char var_9 = (signed char)27;
_Bool var_10 = (_Bool)0;
int var_13 = -817059628;
int zero = 0;
unsigned long long int var_14 = 17855720818762826022ULL;
short var_15 = (short)-6799;
long long int var_16 = 8088466948698806364LL;
void init() {
}

void checksum() {
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
