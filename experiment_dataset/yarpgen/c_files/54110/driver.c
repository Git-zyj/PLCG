#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9191916703820911186ULL;
long long int var_4 = 8454083010192351940LL;
unsigned short var_5 = (unsigned short)45033;
signed char var_8 = (signed char)-106;
long long int var_9 = 5106381154449469069LL;
int var_12 = -166188849;
int var_16 = 331111102;
int zero = 0;
signed char var_17 = (signed char)-85;
short var_18 = (short)-5488;
unsigned short var_19 = (unsigned short)33144;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
