#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16895771333688512238ULL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)30;
long long int var_3 = 7451664510749349866LL;
unsigned char var_5 = (unsigned char)107;
unsigned long long int var_6 = 14674539202332316425ULL;
short var_7 = (short)-29753;
unsigned short var_9 = (unsigned short)45210;
int zero = 0;
unsigned int var_10 = 1172131924U;
unsigned int var_11 = 624083536U;
signed char var_12 = (signed char)86;
int var_13 = -728403535;
unsigned char var_14 = (unsigned char)166;
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
