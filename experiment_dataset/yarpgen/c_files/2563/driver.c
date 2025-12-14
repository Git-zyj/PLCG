#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
unsigned short var_1 = (unsigned short)13839;
unsigned int var_2 = 1242089859U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)164;
unsigned char var_8 = (unsigned char)229;
int var_9 = -836822121;
signed char var_10 = (signed char)39;
unsigned long long int var_13 = 8042669038454296803ULL;
unsigned short var_14 = (unsigned short)44736;
int zero = 0;
unsigned short var_16 = (unsigned short)37104;
int var_17 = 1661920325;
unsigned short var_18 = (unsigned short)50133;
unsigned short var_19 = (unsigned short)63696;
unsigned char var_20 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
