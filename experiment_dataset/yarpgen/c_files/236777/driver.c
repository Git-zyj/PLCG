#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2277134264779023655LL;
unsigned short var_1 = (unsigned short)10346;
unsigned short var_4 = (unsigned short)28321;
short var_8 = (short)26847;
int var_9 = -561846820;
short var_12 = (short)9763;
int zero = 0;
unsigned char var_14 = (unsigned char)92;
unsigned char var_15 = (unsigned char)102;
_Bool var_16 = (_Bool)1;
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
