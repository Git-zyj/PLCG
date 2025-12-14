#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 463978644128248202LL;
unsigned int var_8 = 3951428328U;
unsigned short var_9 = (unsigned short)31907;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)32;
_Bool var_16 = (_Bool)1;
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
