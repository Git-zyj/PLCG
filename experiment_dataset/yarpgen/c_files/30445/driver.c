#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9419007484908242125ULL;
short var_2 = (short)4713;
short var_9 = (short)-8430;
int zero = 0;
unsigned char var_13 = (unsigned char)47;
long long int var_14 = -1182468390705101263LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)18572;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
