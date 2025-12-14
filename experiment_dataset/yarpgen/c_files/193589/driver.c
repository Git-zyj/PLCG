#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5113306664736244704LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)47;
unsigned short var_11 = (unsigned short)45044;
signed char var_12 = (signed char)21;
int zero = 0;
unsigned short var_13 = (unsigned short)52382;
unsigned short var_14 = (unsigned short)19209;
long long int var_15 = -8845992552254425325LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
