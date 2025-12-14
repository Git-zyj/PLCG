#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2539428073834312467LL;
unsigned int var_2 = 3636104194U;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1452418939U;
long long int var_7 = 2843179178927902808LL;
unsigned short var_8 = (unsigned short)7378;
unsigned char var_12 = (unsigned char)89;
short var_13 = (short)-4406;
int zero = 0;
int var_14 = 1487806058;
unsigned long long int var_15 = 6809398417720139477ULL;
unsigned int var_16 = 3011193024U;
long long int var_17 = -6156116793757396635LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
