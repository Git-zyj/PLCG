#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
long long int var_3 = -8715834417224642259LL;
unsigned char var_4 = (unsigned char)16;
long long int var_5 = 5108554703429387000LL;
unsigned char var_7 = (unsigned char)222;
unsigned char var_9 = (unsigned char)21;
signed char var_12 = (signed char)-17;
int zero = 0;
short var_14 = (short)-18980;
unsigned char var_15 = (unsigned char)253;
unsigned char var_16 = (unsigned char)230;
signed char var_17 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
