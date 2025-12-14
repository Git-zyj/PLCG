#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1175272300;
int var_3 = -603182756;
_Bool var_4 = (_Bool)0;
long long int var_5 = -2816435405336092699LL;
unsigned char var_6 = (unsigned char)167;
long long int var_7 = -8780073344733007436LL;
unsigned int var_8 = 1023836379U;
unsigned short var_9 = (unsigned short)43096;
int zero = 0;
int var_10 = 470471913;
short var_11 = (short)-18097;
unsigned long long int var_12 = 9677522409506237267ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
