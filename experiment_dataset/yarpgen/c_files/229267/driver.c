#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-84;
short var_4 = (short)-7576;
unsigned short var_5 = (unsigned short)11648;
long long int var_8 = 4427887489250601489LL;
long long int var_9 = 4985466579905454417LL;
long long int var_12 = 7442816498118092144LL;
int zero = 0;
unsigned char var_15 = (unsigned char)68;
unsigned char var_16 = (unsigned char)104;
long long int var_17 = -3368309629369960228LL;
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
