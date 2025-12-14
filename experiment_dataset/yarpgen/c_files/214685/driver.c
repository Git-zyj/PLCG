#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-24513;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-10072;
unsigned long long int var_9 = 91186743907410631ULL;
unsigned char var_13 = (unsigned char)77;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-30090;
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
