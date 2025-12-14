#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
signed char var_9 = (signed char)-122;
long long int var_15 = -6600697287940562969LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)6;
int zero = 0;
short var_19 = (short)10788;
unsigned short var_20 = (unsigned short)38650;
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
