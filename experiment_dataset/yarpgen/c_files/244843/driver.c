#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19720;
unsigned short var_4 = (unsigned short)1255;
_Bool var_6 = (_Bool)1;
short var_8 = (short)27881;
int var_15 = 1453317856;
int var_17 = 1810112672;
int zero = 0;
int var_20 = -1337503380;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
