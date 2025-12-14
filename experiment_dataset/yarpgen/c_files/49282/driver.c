#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6501615908291065375LL;
_Bool var_1 = (_Bool)0;
unsigned char var_9 = (unsigned char)223;
signed char var_12 = (signed char)34;
int zero = 0;
int var_15 = 1071009258;
long long int var_16 = 6399526118605304735LL;
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
