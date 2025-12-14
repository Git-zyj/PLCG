#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4804970565432253732LL;
unsigned long long int var_2 = 1352888195607551930ULL;
short var_5 = (short)-24516;
int var_6 = 1222130058;
unsigned int var_9 = 660201447U;
short var_10 = (short)11361;
unsigned char var_13 = (unsigned char)105;
signed char var_14 = (signed char)65;
int var_15 = -759688688;
unsigned char var_16 = (unsigned char)150;
int zero = 0;
long long int var_19 = -8539997273210460229LL;
unsigned short var_20 = (unsigned short)36311;
unsigned short var_21 = (unsigned short)25040;
long long int var_22 = -3838435033693795368LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
