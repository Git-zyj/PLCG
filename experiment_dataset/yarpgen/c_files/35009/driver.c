#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17270;
int var_10 = -41185049;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)10523;
unsigned long long int var_15 = 3989775654055241907ULL;
int zero = 0;
unsigned int var_16 = 1322780845U;
long long int var_17 = 5938680487582068902LL;
unsigned char var_18 = (unsigned char)99;
long long int var_19 = 4907188350573016945LL;
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
