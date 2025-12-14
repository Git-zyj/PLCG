#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-73;
unsigned char var_9 = (unsigned char)37;
short var_13 = (short)4472;
int zero = 0;
unsigned int var_18 = 2866962224U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)20304;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
