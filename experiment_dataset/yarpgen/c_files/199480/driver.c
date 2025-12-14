#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12348023179174397386ULL;
unsigned short var_2 = (unsigned short)9221;
long long int var_4 = -7943858967603887491LL;
unsigned long long int var_5 = 14408542810763814958ULL;
int var_9 = -2119599436;
unsigned short var_10 = (unsigned short)40768;
int zero = 0;
unsigned long long int var_11 = 609907077912369779ULL;
short var_12 = (short)-15469;
signed char var_13 = (signed char)59;
void init() {
}

void checksum() {
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
