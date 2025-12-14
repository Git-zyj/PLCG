#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 918614168U;
unsigned short var_5 = (unsigned short)44292;
unsigned long long int var_7 = 12713206744920185263ULL;
unsigned short var_9 = (unsigned short)62601;
short var_10 = (short)-8225;
int var_11 = 939090301;
long long int var_15 = -6213023462232736429LL;
int zero = 0;
unsigned short var_16 = (unsigned short)30994;
int var_17 = 244719006;
long long int var_18 = -1061798977222241116LL;
unsigned char var_19 = (unsigned char)13;
signed char var_20 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
