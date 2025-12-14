#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
int var_1 = -1116339479;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2501515726U;
short var_6 = (short)-22872;
unsigned char var_9 = (unsigned char)100;
int zero = 0;
unsigned char var_10 = (unsigned char)151;
unsigned long long int var_11 = 16990860884911027405ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
