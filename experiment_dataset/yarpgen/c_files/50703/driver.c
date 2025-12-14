#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40735;
long long int var_3 = 7284180201850691658LL;
int var_4 = -1525760725;
unsigned short var_5 = (unsigned short)10108;
short var_6 = (short)14140;
signed char var_8 = (signed char)126;
int var_9 = 705213757;
unsigned int var_14 = 3944883767U;
int zero = 0;
unsigned long long int var_17 = 2807807023590509011ULL;
unsigned int var_18 = 1495071444U;
unsigned short var_19 = (unsigned short)30701;
unsigned short var_20 = (unsigned short)63122;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
