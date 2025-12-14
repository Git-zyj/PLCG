#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21548;
int var_1 = 1881842620;
long long int var_2 = -480700235363454694LL;
unsigned short var_3 = (unsigned short)23146;
unsigned short var_9 = (unsigned short)29614;
signed char var_12 = (signed char)38;
signed char var_13 = (signed char)-89;
int zero = 0;
long long int var_16 = 8131729455523512601LL;
short var_17 = (short)-11542;
short var_18 = (short)26047;
void init() {
}

void checksum() {
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
