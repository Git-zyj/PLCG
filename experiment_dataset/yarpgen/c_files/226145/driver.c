#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54702;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 966232541U;
unsigned long long int var_13 = 4398511217065367254ULL;
int zero = 0;
unsigned long long int var_17 = 12318146395703168685ULL;
unsigned char var_18 = (unsigned char)220;
short var_19 = (short)-7874;
long long int var_20 = 1326468643854219006LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
