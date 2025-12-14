#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned short var_1 = (unsigned short)25807;
unsigned int var_2 = 1427474549U;
int var_6 = 1341873079;
unsigned char var_7 = (unsigned char)154;
int var_9 = -559168248;
int var_11 = -774912517;
int zero = 0;
signed char var_12 = (signed char)111;
short var_13 = (short)-6669;
unsigned char var_14 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
