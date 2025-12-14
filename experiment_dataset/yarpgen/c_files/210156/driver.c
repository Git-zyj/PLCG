#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3637447882951836808ULL;
unsigned char var_6 = (unsigned char)60;
signed char var_7 = (signed char)-107;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)103;
int zero = 0;
unsigned short var_10 = (unsigned short)56712;
long long int var_11 = -8958530031932365326LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
