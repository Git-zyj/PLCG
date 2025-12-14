#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3236511851U;
int var_1 = 1311371673;
int var_4 = -1014565339;
long long int var_9 = -7312019608301187542LL;
unsigned int var_10 = 4238936634U;
long long int var_12 = 3103362486933937259LL;
int zero = 0;
long long int var_17 = -8149085172535597945LL;
int var_18 = 193645972;
unsigned int var_19 = 699897730U;
unsigned int var_20 = 3779761594U;
unsigned int var_21 = 1247367880U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
