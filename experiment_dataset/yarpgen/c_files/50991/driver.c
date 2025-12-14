#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21168;
int var_7 = -2082845834;
unsigned short var_8 = (unsigned short)51487;
int var_9 = 627524401;
unsigned int var_13 = 4273426694U;
int zero = 0;
signed char var_15 = (signed char)-97;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1110458659U;
unsigned short var_18 = (unsigned short)10756;
long long int var_19 = 5520242501512009857LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
