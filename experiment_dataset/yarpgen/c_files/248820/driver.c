#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6180360760719398638LL;
signed char var_3 = (signed char)-51;
unsigned long long int var_7 = 4685199475842955790ULL;
long long int var_8 = -8553962585666835691LL;
signed char var_9 = (signed char)-97;
unsigned char var_12 = (unsigned char)211;
unsigned char var_13 = (unsigned char)85;
int zero = 0;
long long int var_18 = -8652255555969856290LL;
unsigned long long int var_19 = 3192068387094955923ULL;
void init() {
}

void checksum() {
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
