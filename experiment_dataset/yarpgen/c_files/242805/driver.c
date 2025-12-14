#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 691792850U;
unsigned char var_2 = (unsigned char)66;
short var_3 = (short)10831;
short var_4 = (short)-11055;
short var_6 = (short)-880;
int var_7 = 662744386;
int var_8 = 1613726356;
unsigned long long int var_9 = 10334889826605860350ULL;
unsigned short var_11 = (unsigned short)16109;
int zero = 0;
long long int var_12 = 273955152142199898LL;
short var_13 = (short)29109;
short var_14 = (short)-32556;
unsigned long long int var_15 = 12169440501561678132ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
