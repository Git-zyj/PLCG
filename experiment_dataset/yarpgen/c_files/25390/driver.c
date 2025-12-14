#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 343654874U;
int var_3 = -1339326879;
short var_4 = (short)-297;
long long int var_5 = -9015382831255779793LL;
short var_16 = (short)30625;
unsigned char var_17 = (unsigned char)107;
int zero = 0;
unsigned int var_20 = 708873933U;
short var_21 = (short)-26634;
void init() {
}

void checksum() {
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
