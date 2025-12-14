#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5394035119551695513LL;
unsigned int var_3 = 4101068983U;
short var_4 = (short)-10321;
long long int var_5 = 4971903659255406464LL;
unsigned short var_6 = (unsigned short)39210;
signed char var_7 = (signed char)29;
unsigned long long int var_8 = 2724195433830868236ULL;
long long int var_9 = 2129301959014587320LL;
unsigned short var_10 = (unsigned short)6883;
int zero = 0;
int var_11 = 2072467159;
unsigned char var_12 = (unsigned char)79;
unsigned long long int var_13 = 9583717566594173460ULL;
short var_14 = (short)-1969;
unsigned char var_15 = (unsigned char)27;
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
