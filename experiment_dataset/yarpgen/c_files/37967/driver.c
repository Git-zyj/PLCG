#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4907;
unsigned short var_8 = (unsigned short)25786;
long long int var_13 = -6036257726645025940LL;
short var_15 = (short)-10942;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4137119187U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
