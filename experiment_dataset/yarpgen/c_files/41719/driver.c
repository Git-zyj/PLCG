#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_10 = (unsigned char)180;
_Bool var_12 = (_Bool)0;
long long int var_18 = -9159063877860312617LL;
int zero = 0;
int var_19 = 899089617;
unsigned short var_20 = (unsigned short)40375;
void init() {
}

void checksum() {
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
