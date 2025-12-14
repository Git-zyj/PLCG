#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1800276268;
unsigned long long int var_1 = 5232742345382991437ULL;
unsigned int var_3 = 367220410U;
unsigned int var_4 = 698683248U;
unsigned long long int var_5 = 16764057248472843947ULL;
unsigned short var_6 = (unsigned short)61110;
unsigned char var_8 = (unsigned char)191;
unsigned short var_9 = (unsigned short)23363;
unsigned long long int var_10 = 14106522459424928336ULL;
long long int var_11 = 7561302810060522926LL;
unsigned long long int var_12 = 13736069614229716140ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)51264;
signed char var_15 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
