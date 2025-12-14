#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2727034541U;
_Bool var_4 = (_Bool)1;
short var_8 = (short)-24545;
int var_9 = -50307013;
unsigned char var_10 = (unsigned char)16;
unsigned long long int var_12 = 10820598027335818620ULL;
int zero = 0;
int var_14 = -786256028;
int var_15 = -836673426;
short var_16 = (short)-28214;
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
