#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
unsigned short var_1 = (unsigned short)41562;
unsigned char var_4 = (unsigned char)247;
signed char var_5 = (signed char)-97;
unsigned long long int var_9 = 16169412800888908452ULL;
int zero = 0;
long long int var_15 = 8473646015808796076LL;
short var_16 = (short)-31508;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
