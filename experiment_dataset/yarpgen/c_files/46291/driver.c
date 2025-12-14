#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32704;
short var_5 = (short)-21010;
unsigned long long int var_6 = 3171575363920960164ULL;
signed char var_9 = (signed char)-106;
long long int var_14 = -3162044824991243369LL;
unsigned int var_16 = 2841142975U;
unsigned char var_18 = (unsigned char)112;
int zero = 0;
unsigned long long int var_19 = 13808216008446369054ULL;
signed char var_20 = (signed char)-64;
unsigned long long int var_21 = 10761174948905509497ULL;
unsigned char var_22 = (unsigned char)200;
unsigned int var_23 = 2294455943U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
