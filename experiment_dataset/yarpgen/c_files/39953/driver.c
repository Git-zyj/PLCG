#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8309825595588869462LL;
unsigned long long int var_3 = 10655855640513724004ULL;
signed char var_4 = (signed char)13;
int var_5 = -1706681002;
unsigned char var_10 = (unsigned char)124;
unsigned char var_14 = (unsigned char)157;
int zero = 0;
signed char var_17 = (signed char)-89;
short var_18 = (short)-18087;
signed char var_19 = (signed char)25;
unsigned short var_20 = (unsigned short)43775;
void init() {
}

void checksum() {
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
