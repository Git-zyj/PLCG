#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1859613194;
unsigned short var_1 = (unsigned short)10554;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)0;
int var_21 = 324102945;
long long int var_22 = 8758737897113238429LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
