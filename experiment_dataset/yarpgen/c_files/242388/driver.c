#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2447045764230644152ULL;
unsigned int var_6 = 3346390719U;
unsigned char var_7 = (unsigned char)242;
unsigned short var_8 = (unsigned short)19663;
long long int var_11 = -3417734676541174142LL;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 755291587U;
unsigned short var_20 = (unsigned short)44289;
short var_21 = (short)-8843;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
