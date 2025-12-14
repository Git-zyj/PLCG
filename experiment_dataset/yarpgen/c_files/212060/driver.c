#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3167922402076483779LL;
unsigned int var_7 = 3682860148U;
unsigned int var_8 = 1162014948U;
unsigned int var_12 = 132049635U;
unsigned int var_13 = 1606812469U;
unsigned long long int var_14 = 16067670701647579172ULL;
unsigned short var_16 = (unsigned short)27215;
int zero = 0;
unsigned short var_19 = (unsigned short)26513;
int var_20 = -359480412;
unsigned int var_21 = 2821282199U;
int var_22 = -1128958268;
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
