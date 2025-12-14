#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)166;
unsigned char var_2 = (unsigned char)153;
int var_3 = 548460484;
int var_9 = -1483964537;
int var_10 = 226810095;
long long int var_11 = -23226155920084067LL;
unsigned char var_12 = (unsigned char)37;
int var_17 = 2068487292;
long long int var_18 = 466418326467864453LL;
int zero = 0;
int var_19 = 367567920;
int var_20 = -272567452;
unsigned long long int var_21 = 18008008715797694827ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
