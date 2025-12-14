#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -163827870;
short var_1 = (short)-21940;
short var_3 = (short)-12243;
unsigned int var_4 = 4226585539U;
long long int var_6 = -4155169123615160751LL;
unsigned int var_9 = 4243216646U;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -842950262;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
