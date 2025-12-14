#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned char var_3 = (unsigned char)106;
unsigned long long int var_6 = 690341017642380100ULL;
unsigned long long int var_10 = 10241889906589214821ULL;
int var_11 = -396732201;
long long int var_14 = 5187600162353595156LL;
unsigned int var_17 = 1664813947U;
int zero = 0;
int var_18 = 910179815;
short var_19 = (short)5090;
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
