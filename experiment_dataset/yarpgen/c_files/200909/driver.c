#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3558137898U;
long long int var_3 = -310117457281062755LL;
unsigned char var_10 = (unsigned char)104;
int var_13 = -603016018;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_20 = (short)19570;
int var_21 = -1370128821;
void init() {
}

void checksum() {
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
