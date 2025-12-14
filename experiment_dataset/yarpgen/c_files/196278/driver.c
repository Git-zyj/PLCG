#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
int var_1 = -1722606012;
long long int var_2 = 4705319505329218269LL;
unsigned int var_5 = 1624808048U;
int var_6 = -1856201746;
_Bool var_7 = (_Bool)0;
int var_8 = 885352212;
unsigned long long int var_9 = 3357271521067007642ULL;
signed char var_12 = (signed char)-126;
short var_13 = (short)17974;
signed char var_14 = (signed char)-48;
int zero = 0;
unsigned short var_15 = (unsigned short)25022;
long long int var_16 = -867040904070283610LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
