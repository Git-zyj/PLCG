#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2274719030U;
unsigned short var_1 = (unsigned short)32366;
signed char var_3 = (signed char)37;
unsigned int var_5 = 3909571505U;
unsigned short var_8 = (unsigned short)30193;
int zero = 0;
unsigned short var_14 = (unsigned short)18401;
unsigned short var_15 = (unsigned short)35880;
long long int var_16 = -3814200684182018713LL;
long long int var_17 = 6377822428143739759LL;
unsigned int var_18 = 2070423067U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
