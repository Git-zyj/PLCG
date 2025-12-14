#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23840;
unsigned int var_3 = 3014030103U;
unsigned short var_6 = (unsigned short)54351;
unsigned char var_7 = (unsigned char)100;
unsigned char var_11 = (unsigned char)169;
int zero = 0;
short var_17 = (short)20593;
short var_18 = (short)-19842;
long long int var_19 = 2198256431652592486LL;
unsigned int var_20 = 3059953376U;
unsigned char var_21 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
