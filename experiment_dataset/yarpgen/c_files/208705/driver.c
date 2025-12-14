#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)18602;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)53336;
int var_10 = -759718883;
int zero = 0;
short var_18 = (short)-20455;
short var_19 = (short)15163;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
