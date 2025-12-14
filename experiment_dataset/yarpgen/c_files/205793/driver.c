#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)57;
unsigned int var_10 = 3025740709U;
int var_11 = -974219832;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)35138;
short var_21 = (short)-17460;
unsigned short var_22 = (unsigned short)1860;
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
