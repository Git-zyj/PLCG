#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6437;
unsigned short var_3 = (unsigned short)39643;
int var_9 = 1637318764;
int zero = 0;
int var_19 = -1613314749;
unsigned short var_20 = (unsigned short)38327;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)57578;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
