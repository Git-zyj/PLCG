#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7107;
_Bool var_2 = (_Bool)1;
int var_5 = -1110031256;
long long int var_6 = 5295151125946011690LL;
short var_8 = (short)-18927;
unsigned int var_9 = 1152720864U;
unsigned long long int var_10 = 2893416502773088215ULL;
short var_14 = (short)-26791;
int zero = 0;
unsigned int var_16 = 2547800686U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
