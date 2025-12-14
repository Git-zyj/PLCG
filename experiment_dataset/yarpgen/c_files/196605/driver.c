#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10802264570485371088ULL;
unsigned short var_9 = (unsigned short)61739;
unsigned short var_10 = (unsigned short)25073;
int zero = 0;
unsigned short var_19 = (unsigned short)6089;
_Bool var_20 = (_Bool)0;
short var_21 = (short)13895;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
