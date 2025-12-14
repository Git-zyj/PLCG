#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4713126369330218574LL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)38;
short var_3 = (short)-4046;
long long int var_4 = -6470764561787672093LL;
unsigned int var_9 = 1043221201U;
unsigned char var_11 = (unsigned char)81;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)18;
void init() {
}

void checksum() {
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
