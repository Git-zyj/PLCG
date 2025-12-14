#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)32759;
signed char var_10 = (signed char)82;
short var_11 = (short)-9658;
long long int var_13 = 8329528217807266724LL;
int zero = 0;
unsigned short var_15 = (unsigned short)18612;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-84;
void init() {
}

void checksum() {
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
