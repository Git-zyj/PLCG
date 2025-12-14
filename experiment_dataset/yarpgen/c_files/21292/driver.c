#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -79039804;
unsigned char var_1 = (unsigned char)225;
long long int var_2 = -2571355405857109049LL;
unsigned short var_3 = (unsigned short)7371;
signed char var_5 = (signed char)-53;
unsigned char var_6 = (unsigned char)36;
unsigned short var_9 = (unsigned short)37503;
unsigned char var_10 = (unsigned char)104;
int zero = 0;
long long int var_11 = 6866717009697404896LL;
int var_12 = 1695137282;
unsigned short var_13 = (unsigned short)24841;
int var_14 = 1470252688;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
