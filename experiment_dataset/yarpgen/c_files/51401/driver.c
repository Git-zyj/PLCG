#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5143;
unsigned char var_1 = (unsigned char)109;
unsigned char var_2 = (unsigned char)225;
int var_6 = 1981943082;
unsigned char var_8 = (unsigned char)116;
long long int var_9 = 6713230043673306689LL;
unsigned int var_10 = 901643637U;
unsigned long long int var_12 = 10836381665767854419ULL;
short var_13 = (short)-12945;
int zero = 0;
short var_14 = (short)-8359;
unsigned long long int var_15 = 7505840993624480573ULL;
unsigned int var_16 = 1888423940U;
short var_17 = (short)-23317;
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
