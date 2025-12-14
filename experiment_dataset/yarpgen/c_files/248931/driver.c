#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1900847910762400868LL;
long long int var_6 = 8831529588171438267LL;
unsigned char var_7 = (unsigned char)164;
int zero = 0;
long long int var_18 = -4468305014817557441LL;
short var_19 = (short)1413;
short var_20 = (short)17642;
short var_21 = (short)21116;
void init() {
}

void checksum() {
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
