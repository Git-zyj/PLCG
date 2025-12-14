#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11797855587647242952ULL;
unsigned short var_1 = (unsigned short)48206;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 18245838375307968062ULL;
unsigned long long int var_5 = 12745773046115071620ULL;
unsigned int var_8 = 3322727024U;
_Bool var_9 = (_Bool)1;
int var_12 = -2080916027;
int var_15 = 456840570;
int zero = 0;
short var_16 = (short)22110;
unsigned char var_17 = (unsigned char)100;
unsigned long long int var_18 = 12698812476828957975ULL;
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
