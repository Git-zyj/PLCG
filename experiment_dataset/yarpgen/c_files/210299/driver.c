#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7675;
unsigned short var_3 = (unsigned short)35294;
unsigned long long int var_6 = 14251305137256002734ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)197;
int zero = 0;
unsigned char var_11 = (unsigned char)45;
unsigned int var_12 = 3248347887U;
unsigned int var_13 = 691010060U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
