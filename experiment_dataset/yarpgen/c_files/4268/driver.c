#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 947140384;
signed char var_4 = (signed char)66;
unsigned int var_9 = 641869078U;
signed char var_13 = (signed char)-14;
unsigned long long int var_16 = 6101462781238152575ULL;
long long int var_17 = -6030059482589346827LL;
int zero = 0;
unsigned int var_19 = 2578794729U;
unsigned char var_20 = (unsigned char)162;
unsigned char var_21 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
