#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1362341712;
unsigned long long int var_3 = 1928178122139352953ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_9 = (unsigned char)59;
int var_16 = 992830654;
int zero = 0;
unsigned short var_19 = (unsigned short)28027;
long long int var_20 = 4527037760060210074LL;
unsigned long long int var_21 = 3391161465405860581ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
