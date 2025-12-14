#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 523116503U;
unsigned int var_6 = 736840056U;
unsigned int var_8 = 4143729838U;
short var_9 = (short)13711;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)10814;
unsigned long long int var_14 = 17305569798956910845ULL;
void init() {
}

void checksum() {
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
