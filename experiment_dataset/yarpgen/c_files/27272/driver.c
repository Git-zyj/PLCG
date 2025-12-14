#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
unsigned long long int var_1 = 8022408782556866668ULL;
short var_3 = (short)10819;
unsigned char var_4 = (unsigned char)244;
unsigned int var_5 = 2270478361U;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1376883309U;
short var_12 = (short)-19583;
int zero = 0;
unsigned char var_13 = (unsigned char)78;
int var_14 = -834162034;
short var_15 = (short)-25499;
int var_16 = -475846547;
unsigned char var_17 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
