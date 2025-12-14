#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
unsigned short var_3 = (unsigned short)10991;
signed char var_6 = (signed char)82;
short var_8 = (short)-23961;
signed char var_10 = (signed char)-88;
unsigned char var_14 = (unsigned char)176;
int zero = 0;
unsigned int var_16 = 3064595036U;
unsigned long long int var_17 = 4665169300578300942ULL;
short var_18 = (short)20566;
unsigned long long int var_19 = 10497484293210280444ULL;
long long int var_20 = 6388165207935598969LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
