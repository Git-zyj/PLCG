#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)47068;
signed char var_3 = (signed char)-7;
short var_6 = (short)-1136;
long long int var_7 = -5732874494061542510LL;
unsigned char var_9 = (unsigned char)182;
int zero = 0;
unsigned char var_13 = (unsigned char)144;
long long int var_14 = 5186411690964976557LL;
long long int var_15 = 1211326722134474198LL;
void init() {
}

void checksum() {
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
