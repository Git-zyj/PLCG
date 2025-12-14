#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49847;
unsigned short var_1 = (unsigned short)38358;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)51;
int zero = 0;
unsigned int var_15 = 4159919090U;
unsigned char var_16 = (unsigned char)164;
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
