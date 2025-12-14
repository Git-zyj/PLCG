#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55725;
long long int var_6 = -6595459138732209794LL;
short var_8 = (short)-6592;
unsigned int var_13 = 4143808107U;
unsigned int var_14 = 535128277U;
unsigned char var_15 = (unsigned char)226;
int var_17 = 129446093;
int var_18 = -2025404251;
unsigned short var_19 = (unsigned short)26277;
int zero = 0;
unsigned short var_20 = (unsigned short)59793;
unsigned char var_21 = (unsigned char)12;
short var_22 = (short)19167;
short var_23 = (short)-25444;
short var_24 = (short)-6763;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
