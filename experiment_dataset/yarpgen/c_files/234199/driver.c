#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17487149979952819105ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)11057;
unsigned char var_12 = (unsigned char)44;
int zero = 0;
short var_13 = (short)-21162;
long long int var_14 = 3801590308855688084LL;
unsigned short var_15 = (unsigned short)42130;
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
