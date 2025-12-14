#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8305328595908680751LL;
unsigned short var_3 = (unsigned short)12300;
unsigned char var_5 = (unsigned char)195;
long long int var_9 = 4504505010912079428LL;
signed char var_11 = (signed char)-76;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = 644988558;
signed char var_16 = (signed char)-76;
unsigned char var_17 = (unsigned char)80;
signed char var_18 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
