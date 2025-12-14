#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20296;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)90;
unsigned int var_17 = 608840841U;
unsigned long long int var_18 = 8536708139144551962ULL;
long long int var_19 = -8891308830475883793LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
