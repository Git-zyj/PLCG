#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2444;
short var_3 = (short)22637;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1563066186U;
unsigned short var_8 = (unsigned short)32276;
signed char var_9 = (signed char)6;
long long int var_13 = 2847460538821829623LL;
int var_14 = -884064361;
int zero = 0;
unsigned short var_15 = (unsigned short)54428;
unsigned char var_16 = (unsigned char)43;
signed char var_17 = (signed char)12;
void init() {
}

void checksum() {
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
