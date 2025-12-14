#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
unsigned int var_2 = 1947465155U;
int var_4 = -874016842;
unsigned char var_5 = (unsigned char)3;
int var_9 = -1810249521;
unsigned short var_15 = (unsigned short)1880;
short var_16 = (short)-20217;
int zero = 0;
signed char var_17 = (signed char)15;
int var_18 = 146926088;
int var_19 = -230540525;
signed char var_20 = (signed char)-112;
void init() {
}

void checksum() {
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
