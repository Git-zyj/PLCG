#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13689;
unsigned short var_5 = (unsigned short)45635;
unsigned long long int var_6 = 12430621421943669662ULL;
short var_8 = (short)5970;
unsigned char var_9 = (unsigned char)63;
int zero = 0;
unsigned long long int var_10 = 12195159404323000326ULL;
unsigned int var_11 = 1277607735U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11682888862017758626ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
