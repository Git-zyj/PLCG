#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1868745591;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)217;
int zero = 0;
signed char var_11 = (signed char)20;
short var_12 = (short)-15071;
int var_13 = -1061411426;
_Bool var_14 = (_Bool)1;
short var_15 = (short)22700;
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
