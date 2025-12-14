#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
short var_1 = (short)25188;
unsigned short var_2 = (unsigned short)36521;
long long int var_3 = 4514889547789466930LL;
short var_5 = (short)-4520;
long long int var_6 = -6660365035825456394LL;
unsigned short var_8 = (unsigned short)60423;
int zero = 0;
short var_10 = (short)4696;
int var_11 = -1741107207;
short var_12 = (short)-4752;
unsigned short var_13 = (unsigned short)25523;
unsigned char var_14 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
