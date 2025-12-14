#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2600289742793954075LL;
unsigned char var_7 = (unsigned char)21;
long long int var_8 = -5356348011686295692LL;
int var_9 = -949484399;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-16330;
int zero = 0;
long long int var_14 = 35148766969334522LL;
unsigned short var_15 = (unsigned short)44345;
signed char var_16 = (signed char)101;
unsigned short var_17 = (unsigned short)19845;
long long int var_18 = -4218746976101361036LL;
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
