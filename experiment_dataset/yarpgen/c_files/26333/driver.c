#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13630769959125466493ULL;
unsigned long long int var_3 = 4736238926045174004ULL;
int var_5 = 1221943480;
unsigned int var_9 = 620179518U;
short var_10 = (short)-30082;
int var_11 = -1036562197;
unsigned int var_12 = 281727787U;
signed char var_13 = (signed char)-108;
int zero = 0;
long long int var_15 = 1505789431421347131LL;
int var_16 = 1481797884;
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
