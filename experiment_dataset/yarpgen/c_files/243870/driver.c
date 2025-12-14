#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-24276;
long long int var_19 = 8109838875009902045LL;
int zero = 0;
short var_20 = (short)5278;
unsigned short var_21 = (unsigned short)28787;
int var_22 = 369786246;
long long int var_23 = 8104124501881281305LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
