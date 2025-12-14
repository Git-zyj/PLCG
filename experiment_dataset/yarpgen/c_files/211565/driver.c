#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29037;
int var_2 = 1917044827;
unsigned long long int var_3 = 6773885015714897521ULL;
unsigned char var_7 = (unsigned char)52;
unsigned long long int var_11 = 95760778934174938ULL;
unsigned long long int var_13 = 10813412034814951230ULL;
signed char var_15 = (signed char)-10;
unsigned short var_16 = (unsigned short)2205;
unsigned short var_18 = (unsigned short)21681;
unsigned char var_19 = (unsigned char)113;
int zero = 0;
unsigned int var_20 = 2016978723U;
short var_21 = (short)2606;
signed char var_22 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
