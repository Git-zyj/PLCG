#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12771;
signed char var_2 = (signed char)90;
signed char var_3 = (signed char)-51;
int var_4 = -1309534832;
unsigned long long int var_7 = 152928733662147748ULL;
long long int var_9 = 489347416643706143LL;
int zero = 0;
long long int var_10 = 1665677145957788804LL;
unsigned long long int var_11 = 4543998219044948818ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
