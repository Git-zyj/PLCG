#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 803141139U;
long long int var_7 = 3527752115371107162LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)7087;
unsigned int var_16 = 1230007961U;
unsigned char var_17 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
