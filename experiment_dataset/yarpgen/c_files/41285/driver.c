#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65398;
unsigned short var_7 = (unsigned short)43824;
int var_8 = -1713630530;
unsigned short var_9 = (unsigned short)26042;
unsigned int var_12 = 560140032U;
int var_14 = -1030525427;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_17 = (short)22442;
signed char var_18 = (signed char)58;
unsigned long long int var_19 = 12407518915410971761ULL;
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
