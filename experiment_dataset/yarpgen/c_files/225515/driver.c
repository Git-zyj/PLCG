#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48222;
long long int var_1 = 3346915251905582644LL;
unsigned long long int var_3 = 3920158812008540139ULL;
long long int var_4 = -8346803108365181118LL;
long long int var_6 = -8508232761437382028LL;
unsigned short var_7 = (unsigned short)44340;
signed char var_9 = (signed char)-110;
int zero = 0;
int var_11 = 451712282;
long long int var_12 = -3433278974645615233LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
